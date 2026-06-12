#include <stdio.h>
void palindrome(int n)
{
    int rev = 0, rem, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == n)
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}