// GeeksforGeeks: https://www.geeksforgeeks.org/problems/aggressive-cows/0

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Code
        int start = 1, end, mid, ans;
        // Sorting in increasing order
        sort(stalls.begin(),stalls.end());
        end = stalls[n-1]-stalls[0];
        
        while(start<=end)
        {
            mid = start + (end - start)/2;
            int count=1, position=stalls[0];
            
            for(int i=1; i<n; i++)
            {
                if(position+mid<=stalls[i])
                {
                    count++;
                    position=stalls[i];
                }
            }
            if(count<k)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends