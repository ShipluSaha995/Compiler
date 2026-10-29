#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i=0, dot=0, digit=0, valid=1;
    printf("Enter a constant: ");
    scanf("%s", str);
    
    if(str[0]=='+' || str[0]=='-'){
        i++;
    }
    for(; str[i]!='\0'; i++){
        if(isdigit((unsigned char)str[i])){
            digit=1;
        }else if(str[i]=='.' && dot==0){
            dot=1;
        }else{
            valid=0;
            break;
        }
    }

    if(valid && digit){
        printf("Numeric contant\n");
    }else{
        printf("Not a numeric constant\n");
    }
    return 0;
}