#include <stdio.h>
int main (){
    int N,count=0,sum=0,M;
    printf("enter a number:");
    scanf("%d",&N);
    M=N;
    while(N>0){
        count+=1;
        N=N/10;
    }
    for(int i=1;i<=count;i++){
        sum+=M%10;
        M=M/10;
    }
    printf("sum of digits: %d",sum);
    return 0;
}