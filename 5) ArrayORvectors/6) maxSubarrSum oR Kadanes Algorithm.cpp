Problem Statement : https://leetcode.com/problems/maximum-subarray/description/
Solution logic : think in terms that you have not to carry something less with you in future , always take maximum availabke with you in future and while doing it just update the result .

  Code :
#include <bits/stdc++.h>
using namespace std;

int maxSubarrSum(vector<int>&arr){
   
   int n=arr.size();
   

   int currMaxSum=arr[0];
   int maxSum=arr[0];

  for(int i=1;i<n;i++){
    currMaxSum=max(currMaxSum+arr[i],arr[i]);
    maxSum=max(maxSum,currMaxSum);
  }

  return maxSum;
}

int main(){
    
  

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<< maxSubarrSum(arr);
   
  
    return 0;
}

Time Complexity of the problem : O(n).
