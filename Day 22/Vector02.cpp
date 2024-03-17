#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(22);

    cout<<"arr[0]: "<<arr[0]<<endl;
    cout<<"arr.front(): "<<arr.front()<<endl;
    cout<<"arr.back(): "<<arr.back()<<endl;
    cout<<"arr[arr.size()-1]: "<<arr[arr.size()-1]<<endl;

    // Copy Values of one vector to another
    vector<int>a;
    a = arr;
    cout<<"a.size(): "<<a.size();

    // Print values
    cout<<endl;
    for(auto it = arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;
    for(auto i: a)
    cout<<i<<" ";
}