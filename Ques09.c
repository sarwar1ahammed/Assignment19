#include <stdio.h>
#include <string.h>
int factorial(int);
/*
    Write a program that asks the user to enter a username. If the username entered is
    one of the names in the list then the user is allowed to calculate the factorial of a
    number. Otherwise, an error message is displayed
*/
int main()
{
    char userNameList[5][20], userName[20];
    int i,j, flag=0;
    printf("Enter 5 nos. of user name \n");
    for (i=0; i<5; i++)
        gets(userNameList[i]);
    printf("Enter a user name to find it in the list : ");
        gets(userName);
    
    for (i=0; i<5; i++)
    {
        if (strcmp(userNameList[i], userName) == 0)
        {
            flag=1;
            break;
        }
    }
    if (flag=1)
    {
        int n;
        printf("User Name Matched :)!\nNow find the Factorial.\n");
        printf("Enter a number : ");
        scanf("%d", &n);
        int result = factorial(n);
        printf("%d factorial==> %d", n, result);
    }
    else 
        printf("User Name not Matced :(!");

    printf("\n");
    return 0;
}
int factorial (int x)
{
    if (x==0 || x==1)
        return 1;
    return x*factorial(x-1);
    
}
