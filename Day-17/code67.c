#include <stdio.h>
int main() {
    int n1, n2, i, j, k, found;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        printf("enter element %d: ", i+1);
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
    int inter[n1]; 
    k = 0;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 0;
                int m;
                for (m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    inter[k++] = a[i];
                }
                break;
            }
        }
    }
    printf("\nIntersection of Arrays:\n");
    if (k == 0) {
        printf("No common elements found.\n");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", inter[i]);
        }
        printf("\n");
        printf("Total elements in Intersection: %d\n", k);
    }
    return 0;
}