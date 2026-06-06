#include <stdio.h>
int factorial(int n) {
    int result =1;
    if (n == 0) {
        return 1;
    }
    result = n * factorial(n - 1);
    return result;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}