#include<stdio.h>
void star(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n=3;
    star(n);
    return 0;
}