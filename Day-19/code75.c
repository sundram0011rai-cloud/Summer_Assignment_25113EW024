#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTransposed Matrix (%d x %d):\n", cols, rows);
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}