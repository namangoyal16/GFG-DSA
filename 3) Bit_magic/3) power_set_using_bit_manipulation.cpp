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

#include <bits/stdc++.h>
using namespace std;

void generate_subsets(vector<int> & arr, vector<vector<int>>&result , int index , vector<int>&temp_result){

if(index==arr.size()){
    result.push_back(temp_result);
    return;
}
 
 temp_result.push_back(arr[index]);
 generate_subsets(arr,result,index+1,temp_result);
 temp_result.pop_back();
 
 generate_subsets(arr,result,index+1,temp_result);

}

int main(){

    int n;
    cin>>n;

    vector<int>input(n);

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    vector<vector<int>> result;
    vector<int>temp_result;

    generate_subsets(input,result,0,temp_result);

     cout << "Subsets:\n";
    for (const auto &subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
    

    return 0;
}

// we also use this code and it has the same time complexity as of the above bit manipulation code but it uses backtracking to find the subsets .
