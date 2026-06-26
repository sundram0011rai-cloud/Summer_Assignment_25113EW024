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
    int maxFreq = 0, maxElem = a[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElem = a[i];
        }
    }
    printf("Maximum frequency element = %d appears %d times\n", maxElem, maxFreq);
    return 0;
}