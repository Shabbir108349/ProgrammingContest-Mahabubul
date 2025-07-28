#include<stdio.h>
int factorial(int num){
    int ans = 1;
    while(num>0){
        ans *= num;
        num--;
    }
    return ans;
}
int main(){
    int num = 5;
    int f = factorial(num);
    printf("%d",f);
    return 0;
}