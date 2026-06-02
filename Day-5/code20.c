#include <stdio.h>

int main() {
    long long N, largest = -1;
    
    printf("Enter a number: ");
    scanf("%lld", &N);
    
    if(N < 2) {
        printf("No prime factors exist for %lld\n", N);
        return 0;
    }
    while(N % 2 == 0) {
        largest = 2;
        N /= 2;
    }
    for(long long i = 3; i * i <= N; i += 2) {
        while(N % i == 0) {
            largest = i;
            N /= i;
        }
    }
    if(N > 1) {
        largest = N;
    }

    printf("Largest prime factor: %lld\n", largest);
    return 0;
}