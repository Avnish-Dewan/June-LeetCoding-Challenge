

// Input: s = "abc", t = "ahbgdc"
// Output: true

// Input: s = "axc", t = "ahbgdc"
// Output: false

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0,j=0;
        
        while(i<s.length() && j < t.length()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        
        return (i == s.length());
        
    }
};
