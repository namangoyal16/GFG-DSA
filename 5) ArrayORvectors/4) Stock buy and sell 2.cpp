Problem Statement :  we are given an array of n days with prices of stock on n days , we know before hand on which day we can buy the stock and on which day we can seel the  stock.
  the thing allowed extra is multiple transactions which we can do .

  Naive solution for the problem is : think for all pairs and find out the maximum profit . This will go in O(n^2).

  the optimal solution for the problem is , think in terms of graph , if 2nd element is bigger than previous just add the profit and if it has less value than the previous day , then you have to do nothing.

  #include <bits/stdc++.h>
using namespace std;

int max_profit(vector<int>&arr){
    int n=arr.size();
    int profit =0;
  for(int i=1;i<n;i++){
    
    if(arr[i]>arr[i-1]){
        profit+=arr[i]-arr[i-1];
    }
  }

  return profit; 
    
}

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<max_profit(arr);
    

    return 0;
}

Time Complexity of the problem is : O(n). 
  Space complexity of the problem is : O(1).

