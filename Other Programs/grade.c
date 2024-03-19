#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	int marks;
	
	printf("Enter your marks attained: ");
	scanf("%d", &marks);
	
	if(marks >= 80.0 && marks <= 100){
		printf("You have an A");
	}else if(marks >= 75.0 && marks <= 79.9){
		printf("You have a B+");
	}else if(marks >= 70.0 && marks <= 74.9){
		printf("You have a B");
	}else if(marks >= 65.0 && marks <= 69.9){
		printf("You have a C+");
	}else if(marks >= 60.0 && marks <= 64.9){
		printf("You have a C");
	}else if(marks >= 50.0 && marks <= 59.9){
		printf("You have a D");
	}else if(marks >= 0.0 && marks <= 49.9){
		printf("You have a F");
	}else{
		printf("Please enter valid marks!!");
	}
	
	
	return 0;
}
