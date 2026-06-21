#include<stdio.h>
int main(){
    int a[100],n,search,found=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n); 
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(a[i]==search){
            printf("Element found at position %d",i+1);
            found=1;
            break;
        }   
    }
    if(!found){
        printf("Element not found in the array");
    }
    return 0;
}