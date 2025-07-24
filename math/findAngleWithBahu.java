public class findAngleWithBahu {
    public static double angle(int a,int b, int c){
        double sumOfAll = Math.pow(a,2)+Math.pow(b,2)-Math.pow(c,2);
        double multiply = 2*a*b;
        double divide = sumOfAll/multiply;
        double angleOnRadian = Math.acos(divide);
        return (angleOnRadian*180)/Math.PI;
    }
    public static void main(String[] args) {
        int a=7,b=8,c=9;
        double A = angle(b,c,a);
        System.out.println("The angle of A is "+A);

        double B = angle(a,c,b);
        System.out.println("The angle of B is "+B);

        double C = angle(a,b,c);
        System.out.println("The angle of C is "+C);

        System.out.println("To check the answer is right or wrong  "+ (A+B+C));
    }
}
