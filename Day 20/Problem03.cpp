// Leetcode : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
      int start=0, end=0, mid, ans, n=weights.size();

      for(int i=0; i<n; i++)
      {
        start = max(start, weights[i]);
        end += weights[i];
      }

      while(start<=end)
      {
        mid = start + (end - start)/2;
        int package = 0, count = 1;

        for(int i=0; i<n; i++)
        {
            package += weights[i];

            if(package>mid)
            {
                count++;
                package=weights[i];
            }
        }

        if(count<=days)
        {
            ans = mid;
            end = mid - 1;
        }
        else 
        start = mid + 1;
      }
      return ans;
    }
};