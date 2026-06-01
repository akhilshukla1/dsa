class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            int sum=0;
            if(i>=2){
                sum=cost[i]+cost[i-1];
                ans+=sum;
                i-=2;
            }else{
               ans+=cost[i];
            }
        }
        return ans;

    }
};