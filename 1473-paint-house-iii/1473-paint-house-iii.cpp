class Solution {
    struct item_t {
        int color: 16;
        int min_cost: 24;
        int alt_cost: 24;
    };
public:
    int minCost(vector<int>& houses, vector<vector<int>>& costs, int m, int n, int target) {
        if (n == 1) return target == 1;
        constexpr int INVALID = 2e6;
        for (int &h: houses) --h; // now 0-based
        
        vector<item_t> dp(m), dp_next(m);
        vector<int> cost_by_color(n);
        
        for (int t = 0; t < target; ++t) {
            for (int h = t; h < m; ++h) {
                int existing_color = houses[h];
                pair<int,int> min1 = {-1, INVALID};
                pair<int,int> min2 = {-1, INVALID};
                
                for (int c = 0; c < n; ++c) {
                    // if the house is already painted another color
                    if (existing_color != -1 && existing_color != c) {
                        cost_by_color[c] = INVALID;
                        continue;
                    }
                    
                    // start a new neighborhood
                    int cost = (h == 0) ? 0 : INVALID;
                    if (t > 0) {
                        auto item = dp[h-1];
                        cost = (item.color == c) ? item.alt_cost : item.min_cost;
                    }
                    
                    // expand the current neighborhood
                    if (h > t) {
                        cost = min(cost, cost_by_color[c]);
                    }
                    
                    if (cost == INVALID) {
                        cost_by_color[c] = INVALID;
                        continue;
                    }
                    if (existing_color != c) {
                        cost += costs[h][c];
                    }
                    cost_by_color[c] = cost;
                    
                    // bubble up and keep the two best colors
                    pair<int,int> min3 = {c, cost};
                    if (min3.second < min2.second) {
                        swap(min3, min2);
                        if (min2.second < min1.second) {
                            swap(min2, min1);
                        }
                    }
                }
                
                dp_next[h] = {min1.first, min1.second, min2.second};
            }
            swap(dp, dp_next);
        }
        int min_cost = dp.back().min_cost;
        return (min_cost == INVALID) ? -1 : min_cost;
    }
};