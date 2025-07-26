#include<stdio.h>

int comparisonBetweenTwoNumber(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int comparisonBetweenThreeNumber(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    
    int a=5, b=44,c=10;
    printf("The big number is %d\n",comparisonBetweenTwoNumber(a,b));
    printf("The big number among three number is %d\n",comparisonBetweenThreeNumber(a,b,c));

    return 0;
}