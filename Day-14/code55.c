#include<stdio.h>
int main(){
    int a[100],n,largest,second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1]){
        largest=a[0];
        second_largest=a[1];
    } else {
        largest=a[1];
        second_largest=a[0];
    }
    for(int i=2;i<n;i++){
        if(a[i]>largest){
            second_largest=largest;
            largest=a[i];
        } else if(a[i]>second_largest&&a[i]!=largest){
            second_largest=a[i];
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);
    return 0;
}