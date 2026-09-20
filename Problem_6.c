#include<stdio.h>
int main(){
    int T;
    int LSD,MSD,Sum;
    int num,rem;
    printf("Enter The Number The Loops are Work = ");
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        printf("Enter The Number = ");
        scanf("%d",&num);
        LSD = num%10;
        while (num!=0){
            rem=num%10;
            num=num/10;
        } 
        MSD=rem;
        Sum = LSD+MSD;
        printf("Sum is = %d\n", Sum);
    }
    return 0;
}