Problem : we have to return index of largest and second largest element in an array .

  CODE :
  
  #include <bits/stdc++.h>
using namespace std;

pair<int,int>give_Largest_and_SecondLargest(vector<int>&arr){

    pair<int,int>result;

    int largest=0;
    int secondLargest=-1;

    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[largest]){
            secondLargest=largest;
            largest=i;
        }
        else if(arr[i] != arr[largest]){
            if(secondLargest==-1 || arr[i]>arr[secondLargest]){
                secondLargest=i;
            }   
        }
    }
    result={largest,secondLargest};

    return result;

}


int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    auto ans = give_Largest_and_SecondLargest(arr);

    cout<<ans.first<<" "<<ans.second;
    

    return 0;
}

TIME COMPLEXITY : O(n);
