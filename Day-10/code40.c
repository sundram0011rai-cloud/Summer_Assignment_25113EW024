#include <stdio.h>
int main() {
    for (int i='A';i<='E';i++){
        for (int j=i;j<'E';j++){
            printf(" ");
        }
        for(int k='A';k<=i;k++){
            printf("%c ",k);
        }
        for(int l=i-1;l>='A';l--){
            printf("%c ",l);
        }
        printf("\n");
    }
}