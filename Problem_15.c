#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int i, j, k, count;
    char array[1000], temp[1000];

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf(" %[^\n]", array);

        strcpy(temp, array);

        k = strlen(temp);

        for(j = 0; j < k; j++)
        {
            count = 0;

            /* আগে এই character এসেছে কি না */
            int already = 0;

            for(int x = 0; x < j; x++)
            {
                if(temp[x] == temp[j])
                {
                    already = 1;
                }
            }

            if(already == 0)
            {
                for(int x = 0; x < k; x++)
                {
                    if(temp[j] == temp[x])
                    {
                        count++;
                    }
                }

                printf("%c = %d\n", temp[j], count);
            }
        }
    }

    return 0;
}