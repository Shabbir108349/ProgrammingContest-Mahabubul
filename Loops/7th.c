#include<stdio.h>
int sumOf(int n){
    int temp=n;
    int sum=0;
    for(int i=1; i<=n; i++){
        int multi= i*temp;
        sum += multi;
        temp--;
    }
    return sum;
}
int main(){
    int n=5;
    int s = sumOf(n);
    printf("%d\n",s);
    return 0;
}