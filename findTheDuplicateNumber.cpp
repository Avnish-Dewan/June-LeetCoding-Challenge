

// Input: [1,3,4,2,2]
// Output: 2

// Input: [3,1,3,4,2]
// Output: 3

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = 0;
        int fast = 0;

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);

        int find = 0;

        while(find != slow){
            slow = nums[slow];
            find = nums[find];
        }
        return find;
        
    }
};
