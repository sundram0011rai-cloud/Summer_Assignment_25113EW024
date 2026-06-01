#include <stdio.h>
int main(){
    int term1=0, term2=1, nextTerm, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i<=1){
            nextTerm = i;
        }
        else{
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
        printf("%d ", nextTerm);
    }
    return 0;
}