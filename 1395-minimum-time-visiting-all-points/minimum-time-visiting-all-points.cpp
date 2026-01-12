class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

     int n=points.size();
     int ans=0;
     for(int i=1;i<n;i++){
      int d1=abs(points[i][0]-points[i-1][0]);
      int d2=abs(points[i][1]-points[i-1][1]);
      ans+=max(d1,d2);
     }
return ans;
    }
};