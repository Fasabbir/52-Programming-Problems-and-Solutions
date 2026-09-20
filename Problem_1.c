#include<stdio.h>
int main()
{
    int T,num;
    printf("Enter The Number OF N = ");
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        printf("Enter The Number = ");
        scanf("%d",&num);
        if(num%2 == 0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    return 0;
}