// Leetcode: 292. Nim Game [https://leetcode.com/problems/nim-game/description/]

class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
        return 0;
        else
        return 1;
    }
};