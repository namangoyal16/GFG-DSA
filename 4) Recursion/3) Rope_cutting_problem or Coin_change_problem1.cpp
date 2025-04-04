// Problem is to find the max pieces we can cut from a rope ,  for ex if rope is of length 3 m and ae are allowed  to cut 1m , 2m , 3m then how many maximum pieces I can cut . the ans is obviously 3 
// cutting 3 pieces of 1m each , now the point comes how to do it , remember through recursion we can do combinatorics problem that is we can take or not take quantities based on our mind , 
// now we can think for cases with taking a certaion point and by not taking and returning the max of result of taking and non taking.


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

// time complexity of the problem is : O(2^n) order and we even more than it , but we can optimize our solution using dynamic programming.

Another problem of the similar type is to produce all the combinations of the pieces we can actually cut ;

Solution to that part is :   (this problrm is also populary known as coin change problem).

#include <bits/stdc++.h>
using namespace std;

void no_of_ways(int coin_value,vector<int>&coins,vector<vector<int>>&res_arr,vector<int>&temp_arr,int index){

    if(coin_value<0 || index >=coins.size()){
        return;
    }

    if(coin_value==0){
        res_arr.push_back(temp_arr);
        return;
    }

    if(coins[index]<=coin_value){
        temp_arr.push_back(coins[index]);
         no_of_ways(coin_value-coins[index],coins,res_arr,temp_arr,index);
        temp_arr.pop_back();
    }

    no_of_ways(coin_value,coins,res_arr,temp_arr,index+1);


}

int main(){

    int coin_value , no_of_coins;

    cin>>coin_value>>no_of_coins;

    vector<int>coins(no_of_coins);

    for(int i=0;i<no_of_coins;i++){
        cin>>coins[i];
    }

    vector<vector<int>>res_arr;
    vector<int>temp_arr;

    no_of_ways(coin_value,coins,res_arr,temp_arr,0);

    for(auto result : res_arr){
        for(auto value : result){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

// Time complexity of the Problem is : O(2^n).
