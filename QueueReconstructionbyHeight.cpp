

// Input:
// [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]

// Output:
// [[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]


class Solution {
public:
    
    static bool compare(vector<int> a,vector<int> b){
        if(a[0] == b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin(),people.end(),compare);
        
        vector<vector<int> > queueReconstructed;
        
        for(int i = 0;i<people.size();i++){
            queueReconstructed.insert(queueReconstructed.begin()+people[i][1],people[i]);
        }
        return queueReconstructed;
    }
};
