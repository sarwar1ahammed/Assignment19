#include <stdio.h>
#include <string.h>
// Create an authentication system. It should be menu driven.
int main()
{
    char user[3][2][20], userName[20], password[20];
    int i, j, flag=0;

    for (i=0; i<3; i++)
    {
        printf("Enter UserName & Password : ");
        for (j=0; j<2; j++)
            gets(user[i][j]);
    }

    printf("Now Enter userName for search it : ");
        gets(userName);
    printf("Now Enter Password for search it : ");
        gets(password);

    for (i=0; i<3; i++)
    {
        if (strcmp(userName,user[i][0]) == 0 && strcmp(password,user[i][1]) == 0)
        {
            flag=1;
            break;
        }    

    }
    if (flag==1)
        printf("Authentic Login Successfully :)!");
    else 
        printf("Not Authentic :(!");


    printf("\n");
    return 0;
}
