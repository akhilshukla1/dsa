class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        int diff=INT_MAX;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){

            int start=i+1;
            int end=n-1;
            while(start<end){
                int sum=nums[start]+nums[end]+nums[i];
                if( abs(sum-target)<diff){
                    ans=sum;
                    diff=abs(sum-target);

                }

                if(sum<target){
                    start++;
                }else if(sum>target){
                    end--;
                }else{
                    return target;
                }
                
               
               
            }
        }
        return ans;
    }
};