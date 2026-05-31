#include <stdio.h>
int main(){
    int u,l,N,n=0;
    printf("enter the lower limit:");
    scanf("%d", &l);    
    printf("enter the upper limit:");
    scanf("%d", &u);

    for(int i=l;i<=u;i++){
        N=i;
        n=0;
        for(int j=1;j<=N;j++){
            if(N%j==0){
                n++;
            }
        }
        if(n==2){
            printf("%d is prime\n", N);
        }
    }
    return 0;
}