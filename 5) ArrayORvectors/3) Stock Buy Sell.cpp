This Problem is  a problem of buying stock on a day before and selling it afterwards, it is also known as maximum difference problem .

  The key logic in the problem is to think in a way to maximise the sum while iterating over an array , keep the minimum value as the price at which stock can be bought and think for maximizing the profit by 
  iterating over a complete array .

  The solution for the problem is :

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&arr){

    int ans =INT_MIN;

    int day_stock_bought=0;

    for(int i=1;i<arr.size();i++){
       if(arr[i]>arr[day_stock_bought]){
          ans=max(ans,arr[i]-arr[day_stock_bought]);
       }
       else{
        day_stock_bought=i;
       }
    }

    if(ans==INT_MIN){
        return 0;
    }
    else{
        return ans;
    }
}

int main(){
    
    
    int n;
    cin>>n;


    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans =maxProfit(arr);
    cout<<ans;

    return 0;
}

Time Complexity of the problem is O(n) , space  complexity is O(1).
