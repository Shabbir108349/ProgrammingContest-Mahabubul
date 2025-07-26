public class first{
    public static boolean isPalindrome(int num){
        int n = num;
        int ans =0;
        while(n>0){
            int rem = n % 10;
            ans = ans*10 + rem;
            n = n/10;
        }
        if(ans == num){
            return true;
        }else{
            return false;
        }
    }

    static int palindrome(int n){
        int nthPalindrome = 0;
        int counter = 1;
        if(n == 0){
            return 0;
        }
        for(int i=1; i<=n; i++){
            if(isPalindrome(counter)){
                nthPalindrome = counter;
                counter++;
            }else{
                while(!isPalindrome(counter)){
                    counter++;
                }
                nthPalindrome = counter;
                counter++;
            }
        }
        return nthPalindrome;
    }

    static int findNthPalindrome(int n) {
    int count = 0;
    int num = 0;

    while (true) {
        num++;
        if (isPalindrome(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
    }
}

    public static void main(String...args){
        int a = 1000;
        int n = palindrome(a);
        System.out.println(n);
        System.out.print(findNthPalindrome(a));

    }
}