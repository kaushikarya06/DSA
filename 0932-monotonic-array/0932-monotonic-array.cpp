class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;

        // A single simple loop checking every element next to each other
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            if (nums[i] > nums[i + 1]) {
                isIncreasing = false; // Cannot be increasing anymore
            }
            if (nums[i] < nums[i + 1]) {
                isDecreasing = false; // Cannot be decreasing anymore
            }
        }

        // Return the actual true/false outcome
        return isIncreasing || isDecreasing;
    }
};
