class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) {
            return false;
        }

        long int ans = 0;
        long int temp = x;
        while(temp != 0) {
            long int rem = temp%10;
            ans = ans*10+rem;
            temp/=10;
        }

        if(ans == x) {
            return true;
        }

        return false;
        
    }
};