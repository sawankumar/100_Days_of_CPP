// Leetcode: 476. Number Complement [https://leetcode.com/problems/number-complement/description/]

class Solution {
public:
    int findComplement(int num) {
        if(num==0)
        return 1;
        long int ans=0, mul=1, rem;
        while(num)
        {
            rem=num%2;
            rem^=1;
            num/=2;
            ans=ans+rem*mul;
            mul*=2;
        };
        return ans;
    }
};