#include <stdio.h>
int main() {
    int n1, n2, i, j, k, found;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        printf("enter element %d: ", i+1 );
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        printf("enter element %d: ", i+1);
        scanf("%d", &b[i]);
    }
    int uni[n1 + n2];
    k = 0;
    for (i = 0; i < n1; i++) {
        uni[k++] = a[i];
    }
    for (j = 0; j < n2; j++) {
        found = 0;
        for (i = 0; i < k; i++) {
            if (b[j] == uni[i]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            uni[k++] = b[j];
        }
    }

    printf("\nUnion of Arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", uni[i]);
    }
    printf("\n");
    printf("Total elements in Union: %d\n", k);

    return 0;
}