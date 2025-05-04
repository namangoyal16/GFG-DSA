#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>&arr,int low , int high){
  int pivot=arr[low];
  int i =low;
  int j =high;

  while(i<=high && j>=low && i<j){
    while(arr[i]<=pivot && i<=high){
      i++;
    }
    while(arr[j]>pivot && j>=low){
      j--;
    }
    if(i<j){
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[low],arr[j]);
  return j;
}

void quickSort(vector<int>&arr , int low , int high){
  if(low<high){
    int partitionIndex= pivotIndex(arr,low,high);
    quickSort(arr,low,partitionIndex-1);
    quickSort(arr,partitionIndex+1,high);
  }
}

int main(){

  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  quickSort(arr,0,n-1);
  
  for(auto value : arr){
    cout<<value<<" ";
  }

  return 0;
}


Time complexity of the problem is :: O(nlogn) 

IDEA behind it : we think for a pivot value put it into right place and return the index where pivot value is put and then call the function again for pivot index -1 and pivot indecx +1 ,
  apply the same logic of recursion to solve the problem and think for it as a machine which if can solve bigger problem can solve smaller problem also .
