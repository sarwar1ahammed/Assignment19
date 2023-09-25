#include <stdio.h>
#include <string.h>
// a program to read and display a 2D array of strings in C language.
int main()
{
    char str[5][20];
    printf("Enter 5 nos. of Strings : \n");
    int i;
    for (i=0; i<5; i++)
        gets(str[i]);
    printf("\n5 nos. of Strings are : \n");
    for (i=0; i<5; i++)
        printf("%s ",str[i]);

    printf("\n");
    return 0;
}
