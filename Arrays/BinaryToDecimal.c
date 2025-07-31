#include<stdio.h>
#include<math.h>

double decimal(int b[],int length){
    double ans = 0;
    int count = 0;
    for(int i=length-1; i>=0; i--){
        double p = pow(2,count);
        // printf("%.f\n",p);
        ans = ans+(p*b[i]);
        count++;
    }
    return ans;
}

int main(){
    int binaryArray[] = {1,0,1,0,0,0};
    int length = 6;
    double d = decimal(binaryArray,length);
    printf("%.f",d);
    return 0;
}