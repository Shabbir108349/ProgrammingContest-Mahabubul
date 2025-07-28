#include<stdio.h>
#include<math.h>

double sumOf(int n){
    int sum=0;
    int counter=1;
    for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<=i; j++){
            sum += counter;
            counter++;
        }
    }
    return sum;
}

int main(){

    int n=4;
    double s = sumOf(n);
    printf("%.f",s);
    return 0;
}