class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) {
            return false;
        }

        long int res = 0;
        long int temp = x;
        while(temp != 0) {
            long int rem = temp%10;
            res = res*10+rem;
            temp/=10;
        }

        if(res == x) {
            return true;
        }

        return false;
        
    }
};