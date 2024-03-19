#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char*argv[]){
  int age;
    double height;
    double gpa;
    char name[25];
    
    
    printf("Enter your name: ");
    fgets(name, 25, stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    
    printf("Enter your height: ");
    scanf("%lf", &height);
    
    
    printf("Hello %s %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your gpa is %.1f\n", gpa);
    printf("You are %.1f feet tall\n", height);


    return 0;
}
