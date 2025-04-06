Problem : we are given a string and we are asked to print all the permutations of it .
  it is choise based recursive problem in which we have to decide whether we wish to tak a certain element or skip it 
if we are taking a ceratin element then we have to print all Permutations with next index.
  if we are skipping it then also we need to print permutations with next index but excluding the current index.

  code for the problem : 

#include <bits/stdc++.h>
using namespace std;

void printPermutations(string &s,int index , string &empty){

    if(index==s.size()){
        cout<<empty<<endl;
        return;
    }

   empty.push_back(s[index]);
   printPermutations(s,index+1,empty);
   empty.pop_back();

   printPermutations(s,index+1,empty);
}

int main(){
    
    string s;
    cin>>s;

    string empty="";

    printPermutations(s,0,empty);

    return 0;
}

Time Complexity : O(2^n).
  Space complexity:o(n).
