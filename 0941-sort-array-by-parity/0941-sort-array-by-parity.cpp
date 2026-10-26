class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      vector<int>v(nums.size());
      int n=nums.size();
      int j=0;
      for(int i=0 ; i<nums.size() ; i++)
      {
        if(nums[i]%2==0)
        {
       v[j]=nums[i];
       j++;
       }
        else
        {
        v[n-1]=nums[i];
        n--;
       }
      }
       return v;
    }
};