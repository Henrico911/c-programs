#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
	int result;
	
	if(num1 > num2 && num1 > num3){
		result = num1;
	}else if(num2 > num1 && num2 > num3){
		result = num2;
	}else{
		result = num3;
	}
	return result;
}


int min(int num1, int num2, int num3){
	int result;
	
	if(num1 < num2 && num1 < num3){
		result = num1;
	}else if(num2 < num1 && num2 < num3){
		result = num2;
	}else{
		result = num3;
	}
	return result;
}


int main(int argc, char*argv[]){
	printf("The largest number is: %d\n", max(23, 67, 45));
	printf("The smallest number is: %d\n", min(23, 67, 45));	
	
	
	if(3>2 || 2>5){
	    printf("True");
	}else{
        printf("False");
	}	
	return 0;
}
