#include <stdio.h>
#include <math.h>
void armstrong(int n)
{
    int sum = 0, rem, temp,term=0;
    temp = n;
    while (temp != 0)
    { 
        term+=1;
        temp /= 10;
    }
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, term);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}