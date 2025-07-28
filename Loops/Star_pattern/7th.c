#include<stdio.h>
int isPrime(int num){
    if(num == 1|| num == 0) return 0;
    if(num == 2) return 1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num = 1;
    if(isPrime(num)){
        printf("%d is a prime Number\n",num);
    }else{
        printf("%d is not a prime Number\n",num);
    }
    return 0;
}