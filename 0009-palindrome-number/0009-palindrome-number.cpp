class Solution {
public:
    bool isPalindrome(int x) {

        int rev=0,temp=x;
        if(x<0)
        {
            return false;
        }
        
        while(x!=0)
        {
            int rem=x%10;
            if(rev>INT_MAX/10)
            {
                return false;
            }
            if(rev<INT_MIN/10)
            {
                return false;
            }
            rev=rev*10+rem;
            x=x/10;
        }
        
        if(temp==rev)
            return true;
        
        else
            return false;
        
    }
};