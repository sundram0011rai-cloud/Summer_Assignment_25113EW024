#include <stdio.h>
int main() {
    int N,sum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        sum+=i;
    }
    printf("Sum of first %d natural numbers is %d", N, sum);
    return 0;    
    
}