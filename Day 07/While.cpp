// Printing Factors
#include <iostream>
using namespace std;

int main()
{
    int n,m=2;
    cout<<"Enter the number: ";
    cin>>n;
    while(m<=n/2)
    {
        if(n%m==0)
        cout<<m<<endl;
        m++;
    }
}