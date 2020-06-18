
// Input: citations = [0,1,3,5,6]
// Output: 3 
// Explanation: [0,1,3,5,6] means the researcher has 5 papers in total and each of them had 
//              received 0, 1, 3, 5, 6 citations respectively. 
//              Since the researcher has 3 papers with at least 3 citations each and the remaining 
//              two with no more than 3 citations each, her h-index is 3.



class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        int max1 = 0;
        int low = 0,high = citations.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(citations[mid] >= (n-mid) ){
                high = mid-1;
                max1 = max(n-mid,max1);
            }
            else{
                low = mid+1;
            }
        }
        return max1;
    }
};
