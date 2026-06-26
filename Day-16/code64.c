#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}