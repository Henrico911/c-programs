#include <stdio.h>
#include <stdlib.h>

double cube(double num);
void sayHi(char name[]);

int main(int argc, char*argv[]){
	sayHi("Skurge\n");
	printf("Your answer is: %.1f", cube(3.0));
	
	return 0;
}

void sayHi(char name[]){

	printf("Hello %s", name);
}

double cube(double num){
	double result = num *num * num;
	return result;
}





