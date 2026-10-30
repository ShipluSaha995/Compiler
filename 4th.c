#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    int len;

    printf("Enter a comment: ");
    fgets(str, sizeof(str), stdin);

    len= strlen(str);

    if(len>0 && str[len-1]=='\n')
    {
        str[--len]='\0';
    }

    if(len>=2 && str[0]=='/' && str[1]=='/'){
        printf("Single line comments. ");
    }
    else if(len>=4 && str[0]=='/' && str[1]=='*' && str[len-2]=='*' && str[len-1]=='/'){
        printf("Block comments\n");
    }else{
        printf("Not a comment.\n");
    }

    return 0;
}