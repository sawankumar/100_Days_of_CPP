#include <iostream>
using namespace std;

int main(){

    int num, rem, ans=0, mul=1;
    cout<<"Enter the number: ";
    cin>>num;

    while(num>0)
    {
        // remainder
        rem=num%2;
        // quotient
        num/=2;
        // answer
        ans+=rem*mul;
        // mul
        mul*=10;
    }
    cout<<ans;

}