#include<stdio.h>
int main(){
    int a[100],n,odd=0,even=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The number of odd elements in the array is: %d \n",odd);
    printf("The number of even elements in the array is: %d",even);
    return 0;
}