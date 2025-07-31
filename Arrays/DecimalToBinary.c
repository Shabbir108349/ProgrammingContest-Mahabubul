#include<stdio.h>
int desToBin(int dec){
    int ans=0;
    int pow = 1;
    while(dec>0){
        int remainder = dec%2;
        ans = ans+(remainder*pow);
        pow *=10;
        dec/=2;
    }
    return ans;
}
int main(){
    int decimal = 40;
    int a = desToBin(decimal);
    printf("%d",a);
    return 0;
}