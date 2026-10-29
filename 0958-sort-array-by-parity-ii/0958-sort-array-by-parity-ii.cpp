class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int>res;
        int l=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(i%2==0) res.push_back(even[l++]);
            else res.push_back(odd[j++]);
        }
        return res;
    }
};