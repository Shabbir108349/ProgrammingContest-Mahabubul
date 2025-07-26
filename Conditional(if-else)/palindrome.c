#include<stdio.h>
#include <stdbool.h>
bool isPalindrome(int num){
    int n =num;
    int ans = 0;
    
    while(n>0){
        int rem = n%10;
        ans = (ans*10)+rem;
        n = n/10;

    }
    return ans;
    if(ans == num){
        return true;
    }else{
        return false;
    }
}
int main(){
    bool is = isPalindrome(123);
    printf("%d\n",is);
}