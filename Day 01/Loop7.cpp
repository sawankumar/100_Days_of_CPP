// Printing sum of n natural numbers

#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    /*
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    */
   cout<<(n*(n+1))/2;
}