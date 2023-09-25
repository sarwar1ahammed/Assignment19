#include <stdio.h>
#include <string.h>
// a program to search a string in the list of strings.
int main()
{
    char listStr[5][20], str[20];
    int i,j,flag=0;
    printf("Enter 5 nos. of Strings List : \n");
    for (i=0; i<5; i++)
        gets(listStr[i]);
    printf("\nNow enter search String : ");
        gets(str);

    for (i=0; i<5; i++)
    {
        if (strcmp(listStr[i],str) == 0)
        {
            flag=1;
            break;
        }      
    }
    if (flag==1)
        printf("\nString founds.");
    else 
        printf("\nstring not founds.");
    


    printf("\n");
    return 0;
}
