#include <stdio.h>

/*print a Fahrenheit-Celsius table 
  for fahr = 0, 20, 40, 60, ...,300*/
int main() 
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;                   /*lower limit of fahrenheit temp*/
	upper = 300;                 /*upper limit*/
	step = 20;                   /*step size*/
	
	fahr = lower;
	printf("\tFRENHEIT VS CELSIUS\n\n");
	while (fahr <= upper) {
		celsius = (5/9.0)*(fahr - 32);
		printf("\t%3.0f\t-\t%5.1f\n", fahr, celsius);
		fahr = fahr + step;
		}               
	
	
	
	}	  
	
	 
	
	
	
