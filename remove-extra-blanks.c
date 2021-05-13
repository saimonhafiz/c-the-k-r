#include<stdio.h>

//Removing extra blanks

int main() {
	int c;
	c = getchar();
	while (c != EOF) {
		if (c == ' '){
			putchar(c);
			c = getchar();
			while (c == ' '){
				c = "\0";
				c = getchar();
				}
			}
		putchar(c);
		c = getchar();
		}
	return 0;
	}
