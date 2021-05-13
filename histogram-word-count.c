#include<stdio.h>
/* Histogram of word lengths*/
int main() {
	int i,c;
	int arr[15];
	for (i = 0;i < 16;i++) {
		arr[i] = 0;
		}
	c = getchar();
	while (c != EOF) { 
		i = 0;
		
		while (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) == 1 ) {
			i = i + 1;
			c = getchar();
			}
		
		arr[i] = arr[i] + 1;
		c = getchar(); 
	}
    int max = 0, x;
    i = 1;
	while (i <= 14) {
		x = arr[i];
		if (x > max) {
			max = x;
			}
		i++;	
		}
	int maximum;
	maximum = max + 4;
	while (maximum != 0) {
		printf("%d | ", maximum);
		for (i = 1; i <= 14; i++) {
			if (arr[i] >= maximum) {
				printf("*");
				}
			else printf(" ");
					
			printf(" ");
			}
		printf("\n");	
		maximum--;	
		}
	printf("--|----------------------\n");
	printf("0 | 1 2 3 4 5 6 7 8 9");	
		
}
