#include <stdio.h>
#include <math.h>
int main(){
    int N,temp,digit=0,sum=0;
    printf("Enter the number: ");
    scanf("%d", &N);
    temp = N;
    while(temp!=0){
        temp = temp / 10;
        digit+=1; 
    }
    temp = N;
    while(temp!=0){
        sum += pow(temp%10, digit);
        temp = temp / 10;
    }
    if(sum == N){
        printf("%d is an armstrong number.", N);
    }
    else{
        printf("%d is not an armstrong number.", N);        
    }
    return 0;
}