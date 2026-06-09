#include <stdio.h>
void fabonacci(int n)
{
    int a = 0, b = 1, c,i;
    printf("Fibonacci series up to %d: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fabonacci(num);
    return 0;
}