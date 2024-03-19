#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	char color[20];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];
	
	printf("Enter a color: ");
	scanf("%s", color);
	
	printf("Enter a celebrity: ");
	scanf("%s %s", celebrityF, celebrityL);
	
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	
	
	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s", celebrityF, celebrityL);
	
	
	return 0;
}
