#include<stdio.h>
#include<math.h>
int main(){
    int T,Num,i,root;
    scanf("%d",&T);
    for(i=0; i<T; i++){
        scanf("%d",&Num);
        root = sqrt(Num);
        if(root*root == Num){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }
}