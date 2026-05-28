#include <stdio.h>
int main() {
    int N,n=0;
    printf("enter a number:");
    scanf("%d", &N);
    while(N>0){
        n=n+1;
        N=N/10;
    }
    printf("The number of digits in the entered number is %d", n);
    return 0;
}