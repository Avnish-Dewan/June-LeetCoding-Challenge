
// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int hash[3]={0};
        
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int j = 0;
        for(int i = 0;i<3;i++){
            while(hash[i]--){
                nums[j]=i;
                j++;
            }
        }
        
    }
};
