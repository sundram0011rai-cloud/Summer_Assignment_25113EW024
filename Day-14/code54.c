#include<stdio.h>
int main(){
    int a[100],n,num,count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element ");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(a[i]==num){
            count++;
        }
    }    if(count>0){
        printf("Element %d occurs %d times in the array",num,count);
    } else {
        printf("Element not found in the array");
    }
    return 0;

}