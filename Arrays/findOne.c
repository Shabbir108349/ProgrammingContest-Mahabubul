#include<stdio.h>
int OneFind(int a[], int length){
    int oneCount = 0;
    int count=0;
    for(int i=0; i<length; i++){
        if(a[i] == 1){
            count++;
        }else{
            if(oneCount <= count){
                oneCount = count;
                count = 0;
            }
            count = 0;
        }
    }
    if(oneCount <= count){
        oneCount = count;
    }
    return oneCount;
}
int main(){

    int a[] = {1,1,1,1,0,1,0,1,0,0,1,0,0,1,1,0,0};
    int length = 17;
    int o = OneFind(a,length);
    printf("%d",o);
    return 0;
}