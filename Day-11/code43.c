#include <stdio.h>
void prime(int n){
    if (n <= 1) {
        printf("%d is not a prime number.\n", n); 
        return;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return;
        }
    }
    printf("%d is a prime number.\n", n);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}