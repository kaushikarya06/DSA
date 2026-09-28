class Solution {
public:
void reversepart(int i, int j, vector<int>&a)
{
    while(i<=j){
    swap(a[i],a[j]);
    i++;
    j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()) k=k%nums.size();
        int n=nums.size()-1;
        reversepart(0,n-k,nums);
        reversepart(n-k+1,n,nums);
        reversepart(0,n,nums);
        for(int i=0 ; i<nums.size() ; i++)
        {
            cout<<nums[i];
        }
    }
};
