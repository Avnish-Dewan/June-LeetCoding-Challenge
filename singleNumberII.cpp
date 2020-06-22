
// Input: [2,2,3,2]
// Output: 3

// Input: [0,1,0,1,0,1,99]
// Output: 99

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        
        for(auto i : mp){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};
