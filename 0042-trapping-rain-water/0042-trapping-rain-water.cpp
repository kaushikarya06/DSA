class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int arr[n];
       arr[0]=-1;
       int max=height[0];
       for(int i=1 ; i<n ; i++)
       {
        arr[i]=max;
        if(arr[i]<height[i])
        max=height[i];
       }
       int brr[n];
       brr[n-1]=-1;
       int max1=height[n-1];
       for(int i=n-2 ; i>=0 ; i--)
       {
        brr[i]=max1;
        if(brr[i]<height[i])
        max1=height[i];
       }
       int mini[n];
       for(int i=0 ; i<n ; i++)
       {
        mini[i]= min(arr[i],brr[i]);
       }
       int water=0 ; 
       for(int i=0 ; i<n; i++)
       {
        if(mini[i]>height[i]){
        water += (mini[i]-height[i]);}
       }
       return water;
    }
   
};