This Algorithm is based on upon logic used in quick sort algorithm , in quicksort what we do is we partition the array in two halves such that first half is of one type and other half is of other type .
in dutch national flag alorithm we have three type of elements 0 1 2 , so what basic logic says that is , partition the array around 1 , keep the zeroes to the left of 1 and two to the left of 1.

Code for the algorithm:

#include <bits/stdc++.h>
using namespace std;

void dnfa(vector<int>&arr){
  int n=arr.size();
  int left=0;
  int mid=0;
  int right=n-1;
  
  while(left<=mid && mid<=right){
    if(arr[mid]==1){
      mid++;
    }
    else if(arr[mid]==0){
      swap(arr[mid],arr[left]);
      left++;
      mid++;
    }
    else{
      swap(arr[mid],arr[right]);
      right--;
    }
  }
}

int main(){

  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  dnfa(arr);

  for(auto val : arr){
    cout<<val<<" ";
  }

  return 0;
}

Time Complexity of the Code : O(n).
  Space Complexity of the Code : O(1).
