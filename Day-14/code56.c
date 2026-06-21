#include<stdio.h>
int main(){
    int a[100],n,dupplicate,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                dupplicate=a[j];
                printf("Dupplicate element found: %d\n",dupplicate);
                break;
            }
        }
    }
    return 0;

}