class Solution {
public:
     int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        stack<int>st;
        int index=0;
         
        for(int i=0;i<n;i++){
           while(!st.empty() && arr[st.top()]>arr[i] ){

             index=st.top();
            st.pop();
            if(!st.empty())
            ans=max(ans,arr[index]*(i-st.top()-1));
            else
            ans=max(ans,arr[index]*(i));
           }
           st.push(i);
           
        }

        while(!st.empty()){
           index=st.top();
           st.pop();
           if(!st.empty()){
            ans=max(ans,arr[index]*(n-st.top()-1));
           }else{
            ans=max(ans,arr[index]*n);
           }
        }

        return ans;
        
    }
    int maximalRectangle(vector<vector<char>>& arr) {
        int n=arr[0].size();
        int row=arr.size();
        vector<int>height(n,0);
        stack<int>st;
        int index=0;
        int ans=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]=='0'){
                    height[j]=0;
                }else{
                height[j]+=1;
                }
            }
            ans=max(ans,largestRectangleArea(height));

            


        }

        return ans;

    }
};