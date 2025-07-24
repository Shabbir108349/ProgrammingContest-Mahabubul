#include<stdio.h>
#include<math.h>

double perimeterOfTheCircle(int r){
    return 2*M_PI*r;

}

int main(){

    int r = 5;
    printf("The perimeter of the circle is %f\n",perimeterOfTheCircle(r));

    return 0;
}