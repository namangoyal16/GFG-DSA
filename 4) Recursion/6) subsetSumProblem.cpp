Problem : we are given an array with n numbers , no we have to find subsets of a particular sum . We can do this by using recursion at our disposal 
we can think in a way of selecting and not selecting a certain number and how many subsets can be generated using it . 

#include <bits/stdc++.h>
using namespace std;

int noOfSubsets(vector<int>&arr , int k, int index, vector<int>&temp_arr){

    if(index==arr.size()){
        if(k==0){

            for(auto value : temp_arr){
                cout<<value<<" ";
            }
            cout<<endl;
           
           return 1;
        }

        else{
            return 0;
        }
    }

    if(index>arr.size()){
        return 0;
    }
    
    temp_arr.push_back(arr[index]);
    int take=noOfSubsets(arr,k-arr[index],index+1,temp_arr);
    temp_arr.pop_back();

    int notTake=noOfSubsets(arr,k,index+1,temp_arr);

    return take + notTake;
}

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    vector<int>temp_arr;

    int ans = noOfSubsets(arr,k,0,temp_arr);

   // cout<<ans; if we widh to print answers we can also do that how many subsets will be printed here.

    return 0;
}

Time Complexity of the problem : O(2^n). and Space complexity is O(n).
