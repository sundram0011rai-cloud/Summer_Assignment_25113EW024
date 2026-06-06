#include <stdio.h>
int reverseNumber(int n, int reversed) {
    if (n == 0)
        return reversed;
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverseNumber(num, 0);
    printf("Original number  : %d\n", num);
    printf("Reversed number  : %d\n", result);
    return 0;
}