/*Question 1  Identifier recognition
 C program to check whether an input string is a valid C identifier. Keywords must not be accepted as identifiers.

Input: student_1

Output: Valid identifier
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[100];
    int i , valid = 1;

    char *keywords[]={
        "auto", "break", "char", "const", "continue", "default", "do", "double", "else",
        "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return",
        "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
        "void", "volatile", "while"
    };

    int keywordCount=sizeof(keywords)/sizeof(keywords[0]);
    printf("Enter an identifier: ");
    scanf("%s", str);

    if(!(isalpha((unsigned char)str[0]) || str[0]=='_')){
        valid=0;
    }

    for(i=1; str[i]!='\0'; i++){
        if(!(isalnum((unsigned char)str[i]) || str[i]=='_')){
            valid=0;
            break;
        }
    }


    for(i=0; i<keywordCount; i++){
        if(strcmp(str, keywords[i])==0){
            valid=0;
            break;
        }
    }

    if(valid){
        printf("Valid identifier\n");
    }else{
        printf("Invalid Indesntifier\n");
    }

    return 0;
}