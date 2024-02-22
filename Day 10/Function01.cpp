#include <iostream>
using namespace std;

int Sum(int m, int n) // Function Declare
{
    int ans=m+n;      // Function Define
    return ans;
}

int main ()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    //Function call
    cout<<Sum(a,b);
}

