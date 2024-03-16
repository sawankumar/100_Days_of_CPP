// Leetcode: 1009. Complement of Base 10 Integer [https://leetcode.com/problems/complement-of-base-10-integer/description/]

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans=0, mul=1, rem;
        while(n)
        {
            rem=n%2;
            rem^=1;
            n/=2;
            ans=ans+rem*mul;
            mul*=2;
        };
        return ans;
    }
};