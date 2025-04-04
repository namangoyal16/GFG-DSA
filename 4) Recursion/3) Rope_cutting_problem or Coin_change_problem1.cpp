
#include <bits/stdc++.h>
using namespace std;

int max_pieces(int n , vector<int>&arr , int index){

    if(n==0){
        return 0;
    }

    if(index>=arr.size()){
        return -1;
    }
    

   int take =-1;
   if(arr[index]<=n){
    int temp = max_pieces(n - arr[index], arr, index);
        if (temp != -1)  // Ensure it is a valid solution
            take = 1 + temp;
   }

   int not_take=max_pieces(n,arr,index+1);

   if(take==-1 && not_take==-1){
    return -1;
   }
   else{
    return max(take, not_take);
   }

}

int main(){

    int n,m;
    cin>>n>>m;

    vector<int>arr(m);

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    int ans=max_pieces(n,arr,0);
    cout<<ans;
    

    return 0;
}
