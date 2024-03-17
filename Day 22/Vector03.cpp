#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>ans;
    ans.push_back(67);
    ans.push_back(34);
    ans.push_back(22);
    ans.push_back(12);
    ans.push_back(45);

    // sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    // sort in decreasing order

    //sort(ans.begin(),ans.end(), greater<int>());
    //sort(ans.rbegin(),ans.rend());
    //for(int i=0; i<ans.size();i++)
    //cout<<ans[i]<<" ";

    // search in binary search
    cout<<"Searching 12: "<<binary_search(ans.begin(),ans.end(),12)<<endl;

    cout<<"Index of 54: "<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;
}