#include<stdio.h>

int main() {
    int T, num;
    printf("Enter the Number of Loops = ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        printf("Enter Your Number = ");
        scanf("%d", &num);

        if (num >= 1 && num <= 10000) {
            printf("Factors of %d are:\n", num);
            for (int j = 1; j <= num; j++) {
                if (num % j == 0) {
                    printf("%d\t", j);
                }
            }
            printf("\n");  // newline after listing factors
        } else {
            printf("Please Input a Number Between 1 and 10000\n");
        }
    }

    return 0;
}
