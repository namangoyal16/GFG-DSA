Problem statement link : https://leetcode.com/problems/trapping-rain-water/description/

solution : 

#include <bits/stdc++.h>
using namespace std;


int trapwater(vector<int> & height){
  
  int n= height.size();

  // make 2 arrays for precomputing left max height and right max height.

  vector<int>left_max_height(n);
  
  int left_max=height[0];

  for(int i=1;i<n;i++){
    left_max=max(left_max,height[i-1]);
    left_max_height[i]=left_max;
  }

  vector<int>right_max_height(n);
  
  int right_max=height[n-1];

  for(int i=n-2;i>=0;i--){
    right_max=max(right_max,height[i+1]);
    right_max_height[i]=right_max;
  }
  
  int watertrapped=0;
  for(int i=1;i<=n-2;i++){
    if(min(left_max_height[i],right_max_height[i])-height[i] > 0){
      watertrapped+=min(left_max_height[i],right_max_height[i])-height[i];
    }
  }
  
  return watertrapped;
}


int main(){
    
    int n;
    cin>>n;

    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    

   auto ans =trapwater(height);
    
    cout <<ans;

    return 0;
}

Time Complexity of the solution is : O(n);
space complexity is :O(1) ---> though we are pre computing and making two extra arrays to remember max height for left columns and right columns
