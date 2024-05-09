#include <stdio.h>
#include <conio.h>

#define LOWERCASE_TO_UPPERCASE_DIFFERENCE 32

int isVowel(char c);
int isLowerCase(char c);

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    /* Check if input is member of set{A,E,I,O,U,a,e,i,o,u}*/
    if (isVowel(c)){
        printf("%c is a Vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }

    return 0;
}

/*
*Function to check whether an alphaet is vowel or not
*returns one if passed character is vowel otherwise 0
*/

int isVowel(char c){
    if (isLowerCase(c))
    c = c - LOWERCASE_TO_UPPERCASE_DIFFERENCE;
    
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1;
    else
        return 0;    
}

/*
*Functipon to check whether an alphabet is lowercase or not
*returns 1 for lowercase cjaracters otherwise 0
*/

int isLowerCase(char c){
    if(c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}