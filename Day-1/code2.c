#include <stdio.h>
int main() {
    printf("enter a number:");
    int N,product=1;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        product=N*i;
        printf("%d*%d=%d\n",N,i,product);
    }
    return 0;
}