package power_of_three;
class Solution {
    public boolean isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }

    public static void main(String[] args) {
        int n1 = 27;
        int n2 = 0;
        int n3 = -1;

        System.out.println(new Solution().isPowerOfThree(n1));
        System.out.println(new Solution().isPowerOfThree(n2));
        System.out.println(new Solution().isPowerOfThree(n3));
    }
}