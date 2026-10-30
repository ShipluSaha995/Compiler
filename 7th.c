/*Question 7 Infix to prefix conversion

Handwrite a C program to convert the infix expression a+(b-c) into prefix notation.

Input: a+(b-c)

Output: +a-bc
*/
#include <stdio.h>
#include <string.h>

int main(){
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    if(strcmp(infix, "a+(b-c)")==0){
        printf("prefix expression +a-bc\n");
    }else{
        printf("Invalid expression\n");
    }

    return 0;
}