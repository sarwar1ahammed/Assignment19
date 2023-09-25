#include <stdio.h>
#include <string.h>
/*  
    A program to find the number of vowels in each of the 5 strings 
    stored in two dimensional arrays, taken from the user.
*/
int main()
{
    char str[5][20];
    printf("Enter 5 nos. of string to check nos. of vowels: ");
    int i, j, vowel;
    for (i=0; i<5; i++)
        // fgets(str[i], 20, stdin);
        gets(str[i]);
    printf("5 Strings are : ");
    for (i=0; i<5; i++)
        printf("%s ", str[i]);
    
    for (i=0; i<5; i++)
    {
        vowel=0;
        // for (j=0; str[i][j] != '\0'; j++)
        for (j=0; str[i][j]; j++)
        {
            if (str[i][j]=='a'|| str[i][j]=='e'|| str[i][j]=='i'|| str[i][j]=='o'|| str[i][j]=='u')
                vowel++;
        }
        printf("\nVowel of %s ==> %d", str[i], vowel);
    }


    printf("\n");
    return 0;
}
