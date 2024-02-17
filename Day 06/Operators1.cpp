#include<iostream>
using namespace std;

int main()
{
    int x,y,m,n;
    // + - > < * / %
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Sum: "<<x+y<<endl<<"Difference: "<<x-y<<endl<<"Product: "<<x*y<<endl<<"Division: "<<x/y<<endl;

    // ++ --
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    m=n++;
    cout<<"n++: "<<m<<endl;
    m=++n;
    cout<<"++n: "<<m<<endl;
}