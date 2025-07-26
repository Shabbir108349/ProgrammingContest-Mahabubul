#include<stdio.h>
void printSorted(int a, int b, int c){
    int temp ;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Output sorted numbers
    printf("Numbers in ascending order: %d %d %d\n", a, b, c);
}
int main(){
    
    int a=3,b=2,c=5;
    printSorted(a,b,c);

    return 0;
}