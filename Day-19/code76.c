#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;
    int primarySum = 0, secondarySum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("\nEnter elements of Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

  
    for (i = 0; i < n; i++) {
        primarySum   += a[i][i];         
        secondarySum += a[i][n - 1 - i]; 
    }


    printf("\nPrimary   Diagonal (↘): ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    printf("= %d\n", primarySum);

    printf("Secondary Diagonal (↙): ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][n - 1 - i]);
    }
    printf("= %d\n", secondarySum);

    printf("\nPrimary   Diagonal Sum = %d\n", primarySum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);
    printf("Total Diagonal Sum     = %d\n", primarySum + secondarySum);

    return 0;
}