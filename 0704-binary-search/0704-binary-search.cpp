class Solution {
public:
    int helper(vector<int>& nums, int target, int low, int high) {
        if (low > high) {
            return -1;
        }
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
         {
            return mid;
        } 
        else if (nums[mid] < target) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
        
        return helper(nums, target, low, high);
    }
    int search(vector<int>& nums, int target) {

        return helper(nums, target, 0, nums.size() - 1);
    
    }
};