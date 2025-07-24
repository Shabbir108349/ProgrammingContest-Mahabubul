#include<stdio.h>
#include<math.h>
double areaOfTheTriangle(int a[],int length){
    int x1 = a[0];
    int y1 = a[1];
    int x2 = a[2];
    int y2 = a[3];
    int x3 = a[4];
    int y3 = a[5];

    double l = pow(x2-x1,2)+pow(y2-y1,2);
    double AB = sqrt(l);
    // printf("%f\n",AB);

    double m = pow(x3-x2,2)+pow(y3-y2,2);
    double BC = sqrt(m);
    // printf("%f\n",BC);

    double n = pow(x3-x1,2)+pow(y3-y1,2);
    double AC = sqrt(n);
    // printf("%f",AC);

    double halfPerimeter = (AB+BC+AC)/2;

    double ab = halfPerimeter-AB;
    double bc = halfPerimeter-BC;
    double ac = halfPerimeter-AC;
    double multiple = halfPerimeter*ab*ac*bc;
    double result = sqrt(multiple);
    return result;

}
int main(){
    int a[] = {2,3,4,8,6,5};
    int length = 6;
    double aa = areaOfTheTriangle(a,length);
    printf("%.1f\n",aa);
    return 0;
}