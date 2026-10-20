class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
         int a=0;
         
        for(int i=0 ; i<nums.size() ; i++)
        {
            int n=nums[i];
            int b=0;
          while (nums[i]>0){
          nums[i]/=10;
           b++;
           }
         if(b%2==0) 
         a++;
          }
        
           return a;
    }
};