class Solution {
public:
    bool isPalindrome(int x) {

        long rev = 0,temp=x;
        if(x < 0) {
            return false;
        }

        while(temp != 0) {
            int rem = temp%10;
            rev = rev*10 + rem;
            temp/=10;
        }

        if(x == rev) {
            return 1;
        }

        return 0;
        
    }
};