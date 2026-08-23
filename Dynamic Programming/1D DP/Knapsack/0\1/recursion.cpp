class Solution {
  public:
    int knapsack(int w, vector <vector <int>> items, int n){
        if(n==-1||w==0) return 0;
        
        int pick=0;
        if(w>=items[n][1]) pick=items[n][0]+knapsack(w-items[n][1], items, n-1);
        int notpick=knapsack(w, items, n-1);
        
        return max(pick, notpick);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>> items(n, vector<int>(2));
        for(int i=0; i<n; i++){
            items[i][0]=val[i];
            items[i][1]=wt[i];
        }
        return knapsack(W, items, n-1);
    }
};
