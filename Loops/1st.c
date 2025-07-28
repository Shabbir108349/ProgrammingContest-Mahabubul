#include<stdio.h>
int sumOfNnumbers(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n = 10;
    int s = sumOfNnumbers(n);
    printf("%d\n",s);
    return 0;
}