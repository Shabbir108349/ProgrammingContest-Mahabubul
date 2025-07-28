#include<stdio.h>
#include<math.h>

double sumOf(int n){
    double sum = 0;
    int power = 1;
    for(int i=1; i<=n; i++){
        int p = pow(i,power++);
        sum+=p;
    }
    return sum;
}

int main(){

    int n=5;
    double s = sumOf(n);
    printf("%.f\n",s);

    return 0;
}