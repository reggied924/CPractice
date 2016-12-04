#include <stdio.h>

#define START  0
#define END    300
#define STEP   20

int main(){

	float fahr, celsius;

	celsius = START; 

	printf("%7s\t%6s\n", "Celsius", "Fahr");

	while(celsius <= END){

		fahr = (celsius * (9.0/5.0) + 32.0);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + STEP; 

	}

	return 0; 
}