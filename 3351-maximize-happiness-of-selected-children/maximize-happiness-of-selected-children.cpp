class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        int n=hap.size();
        long long ans=0;
        sort(hap.begin(),hap.end(),greater<int>());
        for(int i=0;i<k;i++){
             int current=hap[i]-i;
             if(current>0){
              ans+=current;
             }else break;
             
       }
return ans;
    }
};