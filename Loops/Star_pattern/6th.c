#include<stdio.h>
int isPalindrome(int num){
    int temp = num;
    int ans = 0;
    while(num > 0){
        int rem = num%10;
        ans = (ans*10)+rem;
        num /=10;
    }
    if(temp == ans){
        return 1;
    }else{
        return 0;
    }
}

int nthPalindrome(int n){
    int ans =0 ;
    int counter = 1;
    for(int i=1; i<=n; i++){
        if(isPalindrome(counter)){
            ans = counter;
            counter++;
        }else{
            while(!isPalindrome(counter)){
                counter++;
            }
            ans = counter;
            counter++;
        }
    }
    return ans;
}
int main(){
    int n = 11;
    int a = nthPalindrome(n);
    printf("%d",a);
    return 0;
}