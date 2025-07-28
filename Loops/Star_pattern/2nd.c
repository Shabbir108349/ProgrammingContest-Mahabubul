#include<stdio.h>
void star(int n){
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
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