class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=-1;
        int leftmax=nums[0];
        int right=-1;
        int rightmin=nums[n-1];

        for(int i=1;i<n;i++){
           if(nums[i]<leftmax){
            left=i;
           }else{
            leftmax=nums[i];
           }
        }

        for(int i=n-2;i>=0;i--){
            if(nums[i]>rightmin){
                right=i;
            }else{
                rightmin=nums[i];
            }
        }

        if(right==-1)return 0;

        return left-right+1;
        
    }
};