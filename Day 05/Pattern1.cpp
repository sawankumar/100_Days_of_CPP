// Printing Pattern

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        // Print Spaces
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        // Print Characters
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}