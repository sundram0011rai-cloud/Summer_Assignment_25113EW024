#include <stdio.h>
int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Pair found: (%d, %d)\n", a[i], a[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No pair found with sum %d\n", target);
    }
    return 0;
}