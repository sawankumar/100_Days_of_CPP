// Leetcode: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0, end=arr.size()-1, mid;
        while(start<=end)
        {
            mid = end+(start-end)/2;
            // Peak Element
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            return mid;
            // Move Right
            else if(arr[mid]>arr[mid-1])
            start=mid+1;
            // Move Left
            else
            end=mid-1;
        }
        return -1;
    }
};