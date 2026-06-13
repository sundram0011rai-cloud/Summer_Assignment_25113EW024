#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("the sum of elemnments in the array is: ");
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    int avg=sum/n;
    printf("\nthe average of elemnments in the array is: %d",avg);
    return 0;
}