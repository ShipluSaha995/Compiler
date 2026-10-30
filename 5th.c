/*Question 5 String recognition under a+b*c+

Handwrite a C program to recognize strings under the regular expression a+b*c+. Accept one or more a characters, followed by zero or more b characters, then one or more c characters.

Input: aaabbcc

Output: Accepted*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i=0, a=0, c=0;

    printf("ENter a string: ");
    scanf("%s", str);

    while(str[i]=='a'){
        a++;
        i++;
    }

    while(str[i]=='c'){
        c++;
        i++;
    }

    if(a>0 && c>0 && str[i]=='\0'){
        printf("Accepted\n");
    }else{
        printf("Rejected\n");
    }

    return 0;
}