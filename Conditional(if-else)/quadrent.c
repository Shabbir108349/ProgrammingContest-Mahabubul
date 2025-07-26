#include<stdio.h>
int quadrent(int x, int y){
    if(x>0 && y>0){
        return 1;
    }else if(x>0 && y<0){
        return 4;
    }else if(x<0 && y>0){
        return 2;
    }
    else{
        return 3;
    }
}
int main(){

    int x=1,y=3;
    switch(quadrent(x,y)){
        case 1 :
        printf("first quadrent");
        break;
        case 2 :
        printf("Second quadrent");
        break;
        case 3 : 
        printf("Third Quadrent");
        break;
        default:
        printf("fourth Quadrent");
    }

    return 0;
}