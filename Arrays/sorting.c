#include<stdio.h>
void BubbleSort(int  a[], int n){
    for(int i=0; i<n; i++){
        int temp = 0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
}
int main(){
    int a[] = {3,2,4,6,5};
    int length = 5;
    BubbleSort(a,length);
    for(int i=0; i<length; i++){
        printf("%d ",a[i]);
    }
    return 0;
}