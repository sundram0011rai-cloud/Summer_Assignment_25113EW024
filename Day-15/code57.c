#include<stdio.h>
int main(){
    int a[100],rev[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the %d elements of the array: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        rev[i]=a[n-i-1];
    }
    printf("The reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",rev[i]);
    }
    return 0;
}