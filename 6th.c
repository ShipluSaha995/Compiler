/*Question 6 String recognition under a*b+c*

Handwrite a C program to recognize strings under the regular expression a*b+c*. Accept zero or more a characters, followed by one or more b characters, then zero or more c characters.

Input: aabbbcc

Output: Accepted*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100];
    int i=0, b=0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i]=='a'){
        i++;
    }

    while(str[i]=='b'){
        b++;
        i++;
    }

    while(str[i]=='c'){
        i++;
    }

    if(b>0 && str[i]=='\0'){
        printf("Accepted\n");
    }else{
        printf("Rejected\n");
    }

    return 0;
}