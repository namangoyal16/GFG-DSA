Problem Statement : we have to just return an array with all the overlapping ranges , just be smart and you will be able to do it . 
  Code for it is : 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;

        int lowValue=intervals[0][0];
        int highValue=intervals[0][1];

        for(int i=1;i<n;i++){
            if(intervals[i][0]<=highValue){
                highValue=max(highValue,intervals[i][1]);
            }

            if(intervals[i][0] > highValue){
              result.push_back({lowValue,highValue});
              lowValue=intervals[i][0];
              highValue=intervals[i][1];
            }
        }

        result.push_back({lowValue,highValue});
        return result ;
        
    }
};
Time Complexity : O(n).
