#include <stdio.h>
int main(){
    int N,n=0;
    printf("enter a number:");
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        if(N%i==0){
            n++;
        }
    }
    if(n==2){
        printf("the entered number is prime");
    }
    else{
        printf("the entered number is not prime");
    }
    return 0;
}