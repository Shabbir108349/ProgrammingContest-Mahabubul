#include<stdio.h>
void star(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=i-1; j>0; j--){
            printf("%d",j);
        }
        printf("\n");

    }
}

void star2(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=i-1; j>0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    int n=3;
    star2(n);
    return 0;
}