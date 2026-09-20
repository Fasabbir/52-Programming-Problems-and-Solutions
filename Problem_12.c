#include<stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while(T--) {

        scanf("%d", &N);

        int count = 0;

        while(N > 0) {
            N = N / 5;
            count += N;
        }

        printf("%d\n", count);
    }

    return 0;
}