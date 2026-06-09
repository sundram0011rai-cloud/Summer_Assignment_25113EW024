#include <stdio.h>
void perfect(int n)
{
    int sum = 0, i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    perfect(num);
    return 0;
}