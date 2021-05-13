#include<stdio.h>
/* Histogram of word lengths*/
int main() {
	int i,c;
	int arr[9];
	c = getchar();
	while (c != EOF) { 
		while (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) == 1 ) {
			i++;
			c = getchar();
			}
		printf("%d", i);
		}	
	
	
	
	}
