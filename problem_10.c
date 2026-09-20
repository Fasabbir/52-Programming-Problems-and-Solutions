#include <stdio.h>

int main()
{
    int T, i, r1, r2, B, ball_played;
    double current_rr, asking_rr;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &r1, &r2, &B);

        ball_played = 300 - B;

        current_rr = (r2 * 6.0) / ball_played;
        asking_rr = ((r1 - r2 + 1) * 6.0) / B;

        printf("%.2lf %.2lf\n", current_rr, asking_rr);
    }

    return 0;
}