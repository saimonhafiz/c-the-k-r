#include<stdio.h>

//

int main() {
	int c;
	c = getchar();
	while(c != EOF) {
		if (c == '\t'){
			printf("\\t");c = getchar();}
		else if (c == '\b'){
		    printf("\b");c = getchar();}
		else if (c == '\\'){
			printf("\\\\");c = getchar();}
		else {
			putchar(c);
			c = getchar();}
		}
			    
	
	
	
	
}
