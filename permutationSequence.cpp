
// Input: n = 3, k = 3
// Output: "213"

// Input: n = 4, k = 9
// Output: "2314"

class Solution {
public:
    
    string getString(int n){
        
        string s = "";
        
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        
        return s;
    }
    
    string getPermutation(int n, int k) {
        
        string s = getString(n);
        int i = 1;
        do{
            if(i==k){
                return s;
            }
            i++;
            
        }while(next_permutation(s.begin(),s.end()));
        return "";
    }
};
