#include <stdio.h>
int main() {
    int num,pow,result=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);
    for(int i=1;i<=pow;i++){
        result*=num;
    }
    printf("Result: %d\n", result);
        return 0;
}