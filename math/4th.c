#include<stdio.h>
#include<math.h>

double number(int a){
    double s = sqrt(a);
    double f = floor(s);
    return f;
}

int main(){
    int a = 10;
    printf("The Number is %f",number(a));
    return 0;
}