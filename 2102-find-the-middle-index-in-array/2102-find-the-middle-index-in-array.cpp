class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
     int left=0;
     int n=nums.size();
     int total=0;
     for(int i=0 ; i<n ; i++) 
     {
        total+=nums[i];
     }  
     for(int i=0 ; i<n ; i++)
     {
        int right=total-nums[i]-left;
        if(left==right)
        {
            return i;
        }
        left+=nums[i]; 
     }
     return -1;
    }
};