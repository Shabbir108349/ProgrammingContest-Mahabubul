#include<stdio.h>
int factorial(int num){
    int ans = 1;
    while(num>0){
        ans *= num;
        num--;
    }
    return ans;
}
int fun(int n, int r){
    int nn = factorial(n);
    int rr = factorial(r);
    int n_r = factorial(n-r);
    int semiAns = (rr*n_r);
    int ans = nn/semiAns;
    return ans;
}
int main(){
    int n=4,r=2;
    int f = fun(n,r);
    printf("%d",f);
    return 0;
}