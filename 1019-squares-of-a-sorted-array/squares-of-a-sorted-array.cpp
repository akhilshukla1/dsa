class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int index=n-1;
        vector<int>ans(n);
        while(start<=end){
            if(abs(nums[start])>abs(nums[end])){
                ans[index]=nums[start]*nums[start];
                start++;

            }else{
                  ans[index]=nums[end]*nums[end];
                  end--;
            }

            index--;
        }
        return ans;
        

    }
};