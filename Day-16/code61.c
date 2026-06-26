#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int a[n - 1];
    printf("Enter %d elements (1 to %d with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int i = 0; i < n - 1; i++) {
        actual += a[i];
    }
    int missing = expected - actual;
    printf("Missing number = %d\n", missing);
    return 0;
}