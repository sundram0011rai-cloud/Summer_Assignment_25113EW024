#include <stdio.h>
int main() {
    int N,factorial=1;
    printf("enter a number:");
    scanf("%d",&N);
    while(N>0) {
        factorial*=N;
        N--;
    }
    printf("Factorial of the entered number is %d", factorial);
    return 0;
}