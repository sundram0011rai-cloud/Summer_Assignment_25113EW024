#include <stdio.h>
int main() {
    for (int i=0;i<5;i++){
        for (int j=i;j<5;j++){
            printf(" ");
        }
        for(int k=0;k<=2*i;k++){
            printf("* ");
        }
        printf("\n");
    }
}