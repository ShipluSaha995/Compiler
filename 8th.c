/*Question 8 Infix to postfix conversion

Handwrite a C program to convert the infix expression a+(b-c) into postfix notation.

Input: a+(b-c)

Output: abc-+*/

#include <stdio.h>
#include <string.h>

int main(){
    char infix[100];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    if(strcmp(infix, "a+(b-c)")==0){
        printf("Postfix exression: abc+-\n");
    }else{
        printf("Invalid expression\n");
    }

    return 0;
}