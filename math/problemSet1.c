#include<stdio.h>
#include<math.h>
double angle(int a, int b, int c){
    double sumPlusPow = pow(a,2)+pow(b,2)-pow(c,2);
    double allMulti = 2*a*b;
    double divide = sumPlusPow/allMulti;
    double angleOnRadian = acos(divide);
    double angleOnDegree = (angleOnRadian*180)/M_PI;

    return angleOnDegree;
}
int main(){
    int a=7,b=8,c=9;
    double A = angle(b,c,a);
    printf("The angle of A is %f\n",A);

    double B = angle(a,c,b);
    printf("The angle of B is %f\n",B);

    double C = angle(7,8,9);
    printf("The angle of c is %f\n",C);

    printf("To check that our result is ok or not %.1f\n",A+B+C);

    return 0;
}