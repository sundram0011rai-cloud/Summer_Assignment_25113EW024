#include <stdio.h>
int main (){
    int num1,num2,gcd,small;
    printf("enter the first number:");
    scanf("%d", &num1); 
    printf("enter the second number:");
    scanf("%d", &num2);
    if(num1<num2){
        small=num1;
    }
    else{
        small=num2;
    }
    for(int i=1;i<=small;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("the GCD of %d and %d is %d", num1, num2, gcd);
    return 0;
}