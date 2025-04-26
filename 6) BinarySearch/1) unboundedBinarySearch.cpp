The main problem here is usually we are given a search space and we apply binary search to reduce our search space so that we can search the elements in log n time but if we are given an infinite sized array 
means the end point of the array is undefined and the how we can search for a particular element in that case . we will use a logarithmic approach of to increase our iterator starting from 1 and it will 
multiply it by 2 everytime till we get the search space , this will give us the desired search space and we can run the binary search in that search space and hence we will get the answer.

  CODE:

  #include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int>&arr,int k ,int low, int high){
 
  while(low<=high){
  int mid=(low+high)/2;
    if(arr[mid]==k){
      return mid;
    }
    else if(arr[mid]<k){
      low=mid+1;
    }
    else{
      high=mid;
    }
  }
  return -1;
}

int search(vector<int>&arr , int k){
 if(arr[0]==k){
  return 0;
  }

  int i=1;
  if(arr[1]==k) return 1;
  while(arr[i]<k){
    i*=2;
    if(arr[i]==k){
      return i;
    }
  }
  return binSearch(arr,k,i/2+1,i);
}


int main(){
    
  int n;
  cin>>n;
  int k;
  cin>>k;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int ans = search(arr,k);
  cout<<ans;
  
    return 0;
}
