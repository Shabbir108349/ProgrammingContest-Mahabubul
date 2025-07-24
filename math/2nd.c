#include<stdio.h>
#include<math.h>

double areaOfTheTriangle(int a, int b, int c){
    double halfPerimeter = (a+b+c)/2;
    double aa = halfPerimeter-a;
    double bb = halfPerimeter-b;
    double cc = halfPerimeter-c;
    double coming = halfPerimeter*aa*bb*cc;
    double area = sqrt(coming);
    return area;
}

int main(){
    int a=7, b=8, c=9;
    double area = areaOfTheTriangle(a,b,c);
    printf("The area of the Triangle %.2f\n",area);
    return 0;
}