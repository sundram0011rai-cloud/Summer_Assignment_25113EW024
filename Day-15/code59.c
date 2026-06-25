#include <stdio.h>
int main() {
    int arr[100], n, d, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n;
    for (i = 0; i < d; i++) {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = temp;
    }
    printf("Array after right rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}