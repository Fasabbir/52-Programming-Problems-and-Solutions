#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        char str[300];
        char str2[300];
        char str3[300][30];

        int num = 0;
        int ara[300];
        unsigned long long total = 1;

        /* Input string */
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        /* Copy string */
        strcpy(str2, str);

        /* Count words using for loop */
        char *ptr = strtok(str2, " ");

        for (; ptr != NULL; ptr = strtok(NULL, " "))
        {
            num++;
        }

        /* Calculate num! */
        total = 1;

        for (j = 1; j <= num; j++)
        {
            total = total * j;
        }

        /* Store words */
        j = 0;
        ptr = strtok(str, " ");

        for (; ptr != NULL; ptr = strtok(NULL, " "))
        {
            strcpy(str3[j], ptr);
            j++;
        }

        /* Initialize array */
        for (j = 0; j < num; j++)
        {
            ara[j] = 0;
        }

        /* Check duplicate words */
        for (j = 0; j < num; j++)
        {
            int cnt = 1;

            if (ara[j] == 0)
            {
                for (k = j + 1; k < num; k++)
                {
                    if (strcmp(str3[j], str3[k]) == 0)
                    {
                        ara[j] = 1;
                        ara[k] = 1;
                        cnt++;
                    }
                }
            }

            /* Calculate cnt! */
            unsigned long long factorial = 1;

            for (k = 1; k <= cnt; k++)
            {
                factorial = factorial * k;
            }

            total = total / factorial;
        }

        printf("%d/%llu\n", 1, total);
    }

    return 0;
}