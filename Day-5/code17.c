#include <stdio.h>
int main(){
    int N,S=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1;i<N;i++){
        if(N%i==0){
            S+=i;
        }
    }
    if(S==N){
        printf("entered number is perfect number:");
    }
    else{
        printf("entered number is not perfect number:");
    }
    return 0;

}