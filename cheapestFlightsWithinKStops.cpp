// Input: 
// n = 3, edges = [[0,1,100],[1,2,100],[0,2,500]]
// src = 0, dst = 2, k = 1
// Output: 200
// Explanation: 
// The graph looks like this:

//         0
//    100 / \  500
//       /   \
//      1-----2
//         100


// The cheapest price from city 0 to city 2 with at most 1 stop costs 200, as marked red in the picture.



class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        
    unordered_map<int, vector<pair<int,int>>> g;

    for (const auto& e : flights)

      g[e[0]].emplace_back(e[1], e[2]);

    

    int ans = INT_MAX;

    queue<pair<int,int>> q;

    q.push({src, 0});

    int steps = 0;

    

    while (!q.empty()) {

      int size = q.size();

      while (size--) {

        int curr = q.front().first;

        int cost = q.front().second;

        q.pop();

        if (curr == dst) 

          ans = min(ans, cost);

        for (const auto& p : g[curr]) {

          if (cost + p.second > ans) continue;

          q.push({p.first, cost + p.second});

        }

      }

      if (steps++ > K) break;

    }

    return ans == INT_MAX ? - 1 : ans;

  }
};
