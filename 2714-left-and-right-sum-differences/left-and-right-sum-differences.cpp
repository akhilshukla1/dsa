class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<n;i++){
            int rightsum=sum-nums[i]-leftsum;
            int temp=leftsum;
            leftsum+=nums[i];
            nums[i]=abs(temp-rightsum);
        }
        return nums;
    }
};