#include<stdio.h>
#include<math.h>
int sumOf(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum-=i;
        }else{
            sum+=i;
        }
    }
    return sum;
}
int main(){

    int n=3;
    int s = sumOf(n);
    printf("%d",s);

    return 0;
}