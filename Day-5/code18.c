#include<stdio.h>
int main(){
    int N,S=0,C,F,temp;
    printf("Enter a number: "); 
    scanf("%d", &N);
    C = N;
    while(N!=0){
        temp = N%10;
        F = 1;
        for(int i=1;i<=temp;i++){
            F*=i;
        }
        S+=F;
        N = N/10;
    }
    if(S==C){
        printf("entered number is strong number:");
    }
    else{
        printf("entered number is not strong number:");
    }
    return 0;
}