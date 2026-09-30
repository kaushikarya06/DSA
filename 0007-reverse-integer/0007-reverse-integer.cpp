class Solution {
public:
    int reverse(int x) {
        int y=x;
        long long rev=0;
        int ld=0;
        while(y!=0)
        {
            rev=rev*10;
            ld=y%10;
            rev=rev+ld;
            y/=10;
        }
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return rev;

    }
};