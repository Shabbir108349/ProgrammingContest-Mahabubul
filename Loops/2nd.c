#include<stdio.h>
#include<math.h>

double sumOf(int n){
    double sum = 0;
    for(int i=1; i<=n; i++){
        double p = pow(i,2);
        sum+=p;
    }
    return sum;
}

int main(){
    int n = 5;
    double s = sumOf(n);
    printf("%.f\n",s);
    return 0;
}