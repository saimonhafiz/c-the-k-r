#include<stdio.h>

//Printing words per line

int main() {
	int c, w = 0;
	
	c = getchar();
	while(c != EOF) {
		if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) == 0)  {
			printf("\n");
			}
		else {
			putchar(c);
			}	
		c = getchar();
	    }
	
	
	
	
}
