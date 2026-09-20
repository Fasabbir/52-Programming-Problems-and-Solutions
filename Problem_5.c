#include<stdio.h>
int main(){
    int T,num;
    printf("Enter The Number Will Be Loops Work = ");
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        printf("Enter The Number With Row And Column = ");
        scanf("%d",&num);
        for(int row=1; row<=num; row++){
            for(int col=1;col<=num; col++){
                printf("*");
            }
             printf("\n");
        }
       
    }
    return 0;
}