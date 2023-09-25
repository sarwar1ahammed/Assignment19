#include <stdio.h>
#include <string.h>
/*
    Given a list of words followed by two words, 
    the task is to find the minimum distance between 
    the given two words in the list of words.
*/
int main()
{
    char words[4][20]={"my","name","is","sarwar"};
    char word1[] = "my";
    char word2[] = "sarwar";
    int i, w1=-1, w2=-1, min=10000, temp;
    for(i=0; i<4; i++)
    {
        if (strcmp(words[i], word1) == 0)
            w1 = i;
        if (strcmp(words[i], word2) == 0)
            w2 = i;

        if (w1 != -1 && w2 != -1)
        {
            temp = abs(w2-w1);
            if (temp<min)
                min = temp;
        }
    }
    printf("MIn. distance is %d", min-1);


    printf("\n");
    return 0;
}
