class Solution {
  public:
    int knapsackrec(int w, vector<int> val, vector<int> wt, vector<vector <int>> res, int n){
        
        if(n==-1||w==0) return 0;
        
        if(res[n][w]!=-1) return res[n][w];
        
        int pick=0;
        if(w>=wt[n]) pick=val[n]+knapsackrec(w-wt[n], val, wt, res, n-1);
        
        int notpick=knapsackrec(w, val, wt,res, n-1);
        
        return res[n][w]=max(pick, notpick);
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        int n=val.size();
        vector <vector<int>>  res(n+1, vector<int>(W+1,-1));
        return knapsackrec(W,val, wt, res, n-1);
    }
};
