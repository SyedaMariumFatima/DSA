class Solution {
public:
    int knapsackrec(int w, vector<int> &val, vector<int> &wt, vector<vector<int>> &res, int n) {
        // Base case: No items left or capacity is 0
        if (n == 0 || w == 0) return 0;

        // Return memoized result if already calculated
        if (res[n][w] != -1) return res[n][w];

        int pick = 0;
        // Since 'n' is 1-based size, the current item index is n - 1
        if (w >= wt[n - 1]) {
            pick = val[n - 1] + knapsackrec(w - wt[n - 1], val, wt, res, n - 1);
        }

        int notpick = knapsackrec(w, val, wt, res, n - 1);

        // Store and return the max value
        return res[n][w] = max(pick, notpick);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        // Matrix size allocation: (n + 1) x (W + 1)
        vector<vector<int>> res(n + 1, vector<int>(W + 1, -1));
        
        // Pass total number of items 'n' initially
        return knapsackrec(W, val, wt, res, n);
    }
};
