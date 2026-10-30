/*Question 3 Comment recognition and letter counting

Handwrite a C program to recognize a comment and count the alphabetic letters inside it. Exclude comment delimiters, spaces, digits, and punctuation from the count.

Input: //Hello

Output: It is a comment. Number of letters = 5*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, count = 0, len;

    printf("Enter a comment: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
    {
        str[--len] = '\0';
    }

    if (len >= 2 && str[0] == '/' && str[1] == '/')
    {
        printf("It is a comment. ");

        for (i = 2; str[i] != '\0'; i++)
        {
            if (isalpha((unsigned char)str[i]))
            {
                count++;
            }
        }

        printf("Number of letters = %d\n", count);
    }
    else if (len >= 4 && str[0] == '/' && str[1] == '*' &&
             str[len - 2] == '*' && str[len - 1] == '/')
    {
        printf("It is a comment. ");

        for (i = 2; i < len - 2; i++)
        {
            if (isalpha((unsigned char)str[i]))
            {
                count++;
            }
        }

        printf("Number of letters = %d\n", count);
    }
    else
    {
        printf("It is not a comment.\n");
    }

    return 0;
}
