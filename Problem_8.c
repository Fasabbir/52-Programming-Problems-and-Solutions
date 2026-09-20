#include <stdio.h>

int main()
{
    int T, i, j, k, temp;
    int array[3];

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &array[j]);
        }

        // Sorting
        for(j = 0; j < 2; j++)
        {
            for(k = j + 1; k < 3; k++)
            {
                if(array[k] < array[j])
                {
                    temp = array[j];
                    array[j] = array[k];
                    array[k] = temp;
                }
            }
        }

        // Output
        printf("Case %d:", i);

        for(j = 0; j < 3; j++)
        {
            printf(" %d", array[j]);
        }

        printf("\n");
    }

    return 0;
}