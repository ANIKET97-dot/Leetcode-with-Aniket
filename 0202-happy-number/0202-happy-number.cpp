class Solution {
public:
    int sumSquare(int n) {
        int sum = 0;

        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        while(n != 1 && n != 4) {
            n = sumSquare(n);
        }

        return n == 1;
    }
};