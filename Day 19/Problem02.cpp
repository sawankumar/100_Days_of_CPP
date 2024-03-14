// Leetcode : https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid;

        while(start<=end)
        {
            mid = start + (end - start)/2;

            // ELement Found
            if(nums[mid]==target)
            return mid;
            // Left Side Sorted
            else if(nums[mid]>=nums[0])
            {
                if(nums[start]<=target && nums[mid]>target)
                end = mid - 1;
                else
                start = mid + 1;
            }
            // Right Side Sorted
            else
            {
            if(nums[mid]<target && nums[end]>=target)
            start = mid + 1;
            else
            end = mid - 1;
            }
        }
        return -1;
    }
};