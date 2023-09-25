#include <stdio.h>
#include <string.h>
/*  
    A program to sort 10 city names stored in 
    two dimensional arrays, taken from the user.
*/
int main()
{
    char str[10][20], temp[20];
    printf("Enter 10 nos. of string : ");
    int i, j;
    for (i=0; i<10; i++)
        gets(str[i]);
    printf("10 Strings are : ");
    for (i=0; i<10; i++)
        printf("%s ", str[i]);
    
    for (i=0; i<9; i++)
    {
        for (j=i+1; j<10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nSorted Strings are : \n");
    for (i=0; i<10; i++)
        printf("\n%s", str[i]);


    printf("\n");
    return 0;
}
