#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char num[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int cnt = 1;

        getchar();
        fgets(num, sizeof(num), stdin);

        for(j = 0; num[j] != '\0'; j++)
        {
            if(num[j] == ' ' && num[j + 1] != ' ')
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}