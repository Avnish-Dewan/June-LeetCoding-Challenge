

// Input: [1,3,5,6], 5
// Output: 2

// Input: [1,3,5,6], 2
// Output: 1

// Input: [1,3,5,6], 7
// Output: 4

// Input: [1,3,5,6], 0
// Output: 0


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int pos = 0;
        
        int low = 0,high=nums.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            
            else if(nums[mid]>target){
                high = mid-1;
                pos = mid;
            }
            else{
                low = mid+1;
                pos = mid+1;
            }
            
        }
        return pos;
        
    }
};
