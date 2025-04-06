
Problwm statement: there are n people stading in a circle and starting from first(including the first person) he kills k th person , tell me the original position from the circle who will survive till the last.

  Solution : think recursively , make an array , think for the index to be killed and then eliminate it from the array , continue till one element remains in the array .

Note : this is a brute force method.

#include <bits/stdc++.h>
using namespace std;

void survivour(int totalMen , int killIndex , int index_with_gun , vector<int>&positions){

    if(positions.size()==1){
        return;
    }
    
    int index_to_be_killed=index_with_gun+killIndex;

    if(index_to_be_killed>=positions.size()){
       index_to_be_killed=(index_to_be_killed)%(positions.size());
    }

    for(int j=index_to_be_killed; j<positions.size();j++){
        positions[j]=positions[j+1];
    }
    positions.pop_back();

    survivour(totalMen,killIndex,index_to_be_killed,positions);
}


int main(){
    int totalMen, killIndex;
    cin>>totalMen>>killIndex;

    vector<int>positions(totalMen);

    for(int i=0;i<totalMen;i++){
        positions[i]=i;
    }

    int index_with_gun=0;

    survivour(totalMen,killIndex-1,index_with_gun,positions);

    for(auto value : positions){
        cout<<value+1;
    }
    

    return 0;
}

Time complexity : O(n^2) as we are calling n functions and and in each function at max n operations can be performed to shift the array elements to the left.

How to optimise it : remember that shifting of the array is unnecessary and hence we have to eliminate it , for it we have to write a code which gives us the result instead of manually shifting the array.

we can think of a fixed position in an array which gets killed and we can rotate the array after killing , we have to design a function which gives us index for nth operation if we know the result for (n-1)th operation.

think for 7 people and index to be killed is 3.

A B C D E F G   (3rd index starting from A has to be killed that is C). index=3   (remember we are getting index of D as it will be the last man surviving).
D E F G A B   now kill F.      index=0
G A B D E    now B             index=3
D E G A      now G              index=0
A D E        now E              index=1
A D          now A              index=1
D           the last surviour   index=0

now think that if we know the index we will get for n-1 th step , we have to think for index of n th step 
which will bw , index from (n-1th step +k) % k because we have to stop the overflow from array indices.

  hence code is :

#include <bits/stdc++.h>
using namespace std;

int jos(int n , int k){
    if(n==1){
        return 0 ;
    }

    return (jos(n-1,k)+k)%n;
}

int main(){

    int n,k;
    cin>>n>>k;

    int ans=jos(n,k);
    cout<<ans+1;
    

    return 0;
}

Time complexity is : O(n) because we are not shifting the array actually and hence optimal code . Space complexity is o(n).
