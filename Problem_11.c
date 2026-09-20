#include<stdio.h>
int main(){
    int T,num;
    int fact = 1;
    printf("Enter The Number Which Loop Will Be Work =  ");
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        printf("Enter The Number = ");
        scanf("%d",&num);
        for(int i=1; i<=num; i++){
            fact = fact*i;
        }
        printf("The Result is = %d\n",fact);
        fact = 1;
    }

    return 0;
}