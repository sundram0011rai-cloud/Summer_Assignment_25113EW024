#include <stdio.h>
#include <math.h>
int main(){
    int u,l,temp,digit,sum;
    printf("Enter the lower limit: ");
    scanf("%d", &u);
    printf("Enter the upper limit: ");
    scanf("%d", &l);
    for(int N=u; N<=l; N++){
        temp = N;
        digit = 0;
        sum = 0;
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
            printf("%d is an armstrong number.\n", N);
        }
    }
    return 0;

}