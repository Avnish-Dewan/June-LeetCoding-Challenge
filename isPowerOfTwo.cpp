

// Input: 1
// Output: true 
// Explanation: 2^0 = 1


// Input: 16
// Output: true
// Explanation: 2^4 = 16

// Input: 218
// Output: false




class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        return n>0 && (n&(n-1)) == 0;
        
    }
};
