// we have to calculate subsets of an array using bitwise manipulation .
// just remember a simple maths that every set has 2^n subsets , now think in terms of bits , there are n numbers , n bits and setting and unsetting a bit at a time may generate a subset.
// code for it is as follows :

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   

    for(int i=0;i<(1<<n);i++){
        int num=i;
        int counter=0;
        vector<int>result;
        while(num>0){
           if(num&1){
            result.push_back(arr[counter]);
           }
           counter++;
           num=num>>1;
        }

        for(auto value : result){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

// Time complexity of the code is : O(2^n * n ) , we caanot achieve better time complexity than this time complexity to solve the problem .
