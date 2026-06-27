#include <stdio.h>
int main() {
    int n1, n2, n3, i, j, k, found;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    printf("Enter size of third array: ");
    scanf("%d", &n3);
    int c[n3];
    printf("Enter elements of third array:\n");
    for (i = 0; i < n3; i++) {
        printf("c[%d]: ", i);
        scanf("%d", &c[i]);
    }
    int common[n1]; 
    int k2 = 0;
    for (i = 0; i < n1; i++) {
        int inB = 0, inC = 0;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                inB = 1;
                break;
            }
        }
        for (j = 0; j < n3; j++) {
            if (a[i] == c[j]) {
                inC = 1;
                break;
            }
        }
        if (inB == 1 && inC == 1) {
            found = 0;
            for (k = 0; k < k2; k++) {
                if (common[k] == a[i]) {
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                common[k2++] = a[i];
            }
        }
    }
    printf("\nCommon Elements in all three arrays:\n");
    if (k2 == 0) {
        printf("No common elements found.\n");
    } else {
        for (i = 0; i < k2; i++) {
            printf("%d ", common[i]);
        }
        printf("\n");
        printf("Total common elements: %d\n", k2);
    }
    return 0;
}