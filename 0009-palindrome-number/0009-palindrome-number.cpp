class Solution {
public:
    bool isPalindrome(int x) {
        int ld=0;
        long long rev=0;
        int y=x;
        while(y>0)
        {
            rev=rev*10;
            ld=y%10;
            rev+=ld;
            y=y/10;

        }
        if (rev==x)
        {
           return true; 
        }
        else
        return false;
        
    }
};