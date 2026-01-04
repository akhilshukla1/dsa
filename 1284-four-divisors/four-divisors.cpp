class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        

        for(int x:nums){
            vector<int>divisor;
            int count=0;
           for (int i = 1; i * i <= x; i++) {
             if (x % i == 0) {
                count++;
               divisor.push_back(i);
                  if (i != x / i) {  count++;
                 divisor.push_back(x / i);}
    }
    if(count>4)break;
}


            if(divisor.size()==4){
                int sum=0;
                for(int d:divisor){
                    sum+=d;
                }
                ans+=sum;
            }

        }
        return ans;
    }
};