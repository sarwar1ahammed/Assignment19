#include <stdio.h>
#include <string.h>
/*
    Check whether all email addresses have
    ‘@’ in it. Print the odd email out.
*/
int main()
{
    char str[5][50];
    int i, j, flag;
    printf("Enter the Email List \n");
    for (i=0; i<5; i++)
        gets(str[i]);

    printf("Odd Email I'd thats without '@' are : \n");
    for (i=0; i<5; i++)
    {
        if (strchr(str[i],'@') == 0)
            printf("%s\n", str[i]);
    }
    printf("\n");
    return 0;
}
