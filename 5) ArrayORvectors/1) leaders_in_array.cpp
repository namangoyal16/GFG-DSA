Simple problem just return index of the largest element .

  CODE:
  #include <bits/stdc++.h>
using namespace std;

int printlargest(vector<int>&arr){
    
    int res=INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>res){
            res=i;
        }
    }

    return res;
}

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int ans = printlargest(arr);

   cout<<ans;

    return 0;
}

Time Complexity of the code : O(n); // we are iterating over a complete array to find the largest element.
Space complexity : O(1)
