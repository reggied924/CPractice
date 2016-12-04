#include <stdio.h>

#define LOWER   0          /* lower limit of the temperature table */
#define UPPER   300        /* upper limit of the temperature table */
#define STEP    20         /* step size */

int main(){

	float fahr, celsius;

	fahr = UPPER;

	 printf("%4s\t%7s\n", "Fahr", "Celsius"); 

	while(fahr >= LOWER){

		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr - STEP;

	}

	return 0;
}