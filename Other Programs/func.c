#include <stdio.h>

int func_prod(int x, int y);
int num1, num2;


int main(){

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    int finalmult = func_prod(num1,num2);
    printf("%d",finalmult);

    return 0;
}

int func_prod(int x, int y){
    int product;

    product = num1 * num2;

    return product;
}