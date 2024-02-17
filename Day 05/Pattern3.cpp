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
        // Print 1 to row
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        // Print row-1 to 1
        for(col=row-1;col>=1;col--)
        {
            cout<<col<<" ";
        }        
        cout<<endl;
    }
}