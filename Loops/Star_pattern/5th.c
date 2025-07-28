#include<stdio.h>
void star(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        //this problem is simillar to the previous(4th) question. but on this position it is a little tricky . if you think deeply you will understand the theory. Hope you well soon.
        for(int j=i; j>1; j--){
            printf("%d",j-1);
        }
        printf("\n");
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=n-i; j++){
            printf("%d",j);
        }
        for(int j=n-i-1; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){

    int n=3;
    star(n);

    return 0;
}