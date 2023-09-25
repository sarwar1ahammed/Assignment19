#include <stdio.h>
#include <string.h>
// Check whether all ip addresses are valid.
int main()
{
    char ip[]= "123.50.30.290";
    char *str = strtok(ip, ".");
    while(str != NULL)
    {
        int x = atoi(str);
        if((x>=0) && (x<=255))
            printf("%d ", x);

        str = strtok(NULL, ".");
    }

    printf("\n");
    return 0;
}
