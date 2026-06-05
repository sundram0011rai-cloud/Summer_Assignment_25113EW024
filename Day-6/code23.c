#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        if (temp % 2 == 1)
            count++;
        temp /= 2;
    }
    printf("Binary representation counts %d set bit(s)\n", count);

    return 0;
}