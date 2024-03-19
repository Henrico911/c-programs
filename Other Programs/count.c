#include <stdio.h>

int main(){
	int i, j;
	
	printf("Counting from 0 to 10 and from 10 to 0\n");
	printf("0=======10\n");
	for(i=0, j=10; i++, j--;){
		printf("%d=======%d\n", i,j);
	}
	
	return 0;
}
