#include<stdio.h>
int main(){
    int T;
    int num[100];
    printf("Enter The Number of Loop Work = ");
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        printf("Enter The Number = ");
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            printf("EVEN\n");
        }
        else{
            printf("ODD\n");
        }
    }
    return 0;
}