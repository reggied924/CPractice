#include <stdio.h>

int main(){

	float fahr, celsius;
	int start, end, step;

	start = 0;
	end = 300;
	step = 20;

	celsius = start; 

	printf("%7s\t%6s\n", "Celsius", "Fahr");

	while(celsius <= end){

		fahr = (celsius * (9.0/5.0) + 32.0);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step; 

	}
}