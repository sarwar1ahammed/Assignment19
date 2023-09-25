#include <stdio.h>
#include <string.h>
// print the strings which are palindrome in the list of strings.
int main()
{
    char str[5][20];
    int i,j,k;
    printf("Enter 5 nos. of String \n");
    for (i=0; i<5; i++)
        gets(str[i]);

    for (i=0; i<5; i++)
    {
        j=strlen(str[i])-1;
        k=0;
        // printf("%s==>%d", str[i], j);
        while(k<=j)
        {
            if (str[k] != str[j])
            {
                break;
            }
            k++;
            j--;
        }
        if (k>j)
            printf("%s ", str[k]);

    }
    
    printf("\n");
    return 0;
}
