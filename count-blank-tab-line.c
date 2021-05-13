#include<stdio.h>
/*Counting blanks, tabs and newlines from input*/

int main() {
	
	int bl = 0,tb = 0,nl = 0,strng;
	strng = getchar();
	while (strng != EOF) {
		if(strng == ' '){bl++;}            //Counting blanks 
		else if (strng == '\n'){nl++;}     //Counting newlines
		else if (strng == '\t'){tb++;}	   //Counting tabs
		strng = getchar();
		}
	printf("\nBlanks:%d \n Tabs:%d \nNewlines:%d", bl, tb, nl); //Print them
	} 
