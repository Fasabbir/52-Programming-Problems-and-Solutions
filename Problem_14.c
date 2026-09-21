#include <stdio.h>

int main()
{
    int T;
    int i, j, count;
    char array[1000];
    char ch;

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf(" %[^\n]", array);
        scanf(" %c", &ch);

        count = 0;

        for(j = 0; array[j] != '\0'; j++)
        {
            if(array[j] == ch)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}