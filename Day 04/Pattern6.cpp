// Printing Pattern

#include<iostream>
using namespace std;

int main()
{
    int row,col,num;
    for(row=1;row<=5;row++)
    {
        //Print Spaces
        for(col=1;col<=5-row;col++)
            cout<<"  ";
        //Print Numbers
        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";            
        }
        cout<<endl;
    }
} 