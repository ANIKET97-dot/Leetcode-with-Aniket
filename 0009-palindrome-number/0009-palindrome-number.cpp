class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum = 0;
        int original = x;
        if (x < 0){
            return false;
        }
        while (x > 0){
            int last = x % 10;
           revNum = (revNum * 10) + last;
           x = x / 10;
        }

        if (revNum == original){
            return true;
        }
        else{
            return false;
        }
    }
};