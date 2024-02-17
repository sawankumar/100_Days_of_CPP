// Printing table

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }
}