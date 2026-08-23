class Solution {
  public:
    bool static compare(vector<int>& a, vector<int>& b){
        double a1=(a[0]*1.0)/a[1];
        double b1=(b[0]*1.0)/b[1];
        return a1>b1;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int c) {
        int n=wt.size();
        vector<vector <int>> items(n, vector<int>(2));
        for(int i=0; i<n; i++){
            items[i][0]=val[i];
            items[i][1]=wt[i];
        }
        sort(items.begin(), items.end(), compare);
        double sum=0.0;
        for(auto item: items){
            if(item[1]<=c) {
                sum+=item[0];
                c-=item[1];
            }    
            else{
                sum+=((double)item[0]/item[1])*c;
                break;
            }
        }
        return sum;
    }
};
