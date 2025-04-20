Problem : we have to calculate if there exists a subarr with given sum and then return whether it exists or not and the index of starting index and last index of subarr.

Code :

#include <bits/stdc++.h>
using namespace std;

int subArrayWithGivenSum(vector<int>&arr,int k , int &currStartingIndex,int &lastIndex){
    int n=arr.size();

    int sum=0;
    currStartingIndex=0;
    lastIndex=0;
    bool flag =false;

    for(int i=0;i<n;i++){
        sum+=arr[i];

         if(sum>k){
            int j=currStartingIndex;
            while(sum>k && j<=i){
                sum-=arr[j];
                j++;
                currStartingIndex++;
            }
        }
        
         if(sum==k){
            lastIndex=i;
            flag=true;
            break;
        }
        
        
    }
   
   return flag;
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
    
   int currStartingIndex,lastIndex;
   int ans= subArrayWithGivenSum(arr,k,currStartingIndex,lastIndex);
 
   cout<<ans<<endl;
 
  cout<<currStartingIndex<<endl;
  cout<<lastIndex<<endl;
  
    return 0;
}
