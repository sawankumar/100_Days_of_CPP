// Fibonacci Series

#include<iostream>
using namespace std;
int main()
{
    int last=-1, prev=1, curr,n,i;
    cout<<"Enter a number: ";
    cin>>n;    
    for(i=0;i<n;i++)
    {
        curr = last + prev;
        cout<<curr<<endl;
        last = prev;
        prev = curr;
    }
}