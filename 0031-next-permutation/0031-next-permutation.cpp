class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n=nums.size();
      int ind=-1;
      for(int i=n-2 ; i>=0 ; i--)
      {
        if(nums[i]<nums[i+1])
        {
            ind=i;
            break;
        }
      }
      if(ind==-1){
      reverse(nums.begin(),nums.end());
      return;}
      reverse(nums.begin()+ind+1,nums.end());
      int j=-1;
      for(int i=ind+1 ; i<n ; i++)
      {
        if(nums[i]>nums[ind])
        {
            j=i;
            break;
        }
      }
      int temp=nums[ind];
      nums[ind]=nums[j];
      nums[j]=temp;
      return;  
    }
};