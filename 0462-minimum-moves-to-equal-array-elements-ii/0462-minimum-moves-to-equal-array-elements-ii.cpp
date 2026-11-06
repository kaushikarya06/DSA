class Solution {
public:
    int minMoves2(vector<int>& nums) {
     int m=0;
     sort(nums.begin(),nums.end());
     int m1= nums[nums.size()/2];
     for(int x : nums)
     {
        
        m+=(abs(x-m1));
     } 
     return m;  
    }
};