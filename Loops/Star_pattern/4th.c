#include<stdio.h>
//this problem is not beginner friendly. If you try it first time and failed. please don't lose your hope . You will solve this after some month or days. if you will continue your practise. otherwise it will not be solved by you. minded; 
void star(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ // for printing spaces
            printf(" ");
        }
        for(int j=1; j<=i; j++){ //for printing star
            printf("*");
        }
        for(int j=1; j<i; j++){ // for printing another star
            printf("*");
        }
        printf("\n");

    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){ //for printing space
            printf(" ");
        }
        for(int j=n-i; j>0; j--){ //for printing star
            printf("*");
        }
        for(int j=i; j<n-1; j++){ //for printing star
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