 The not so good theorem for pattern searching in a string is Rabin Karp Algorithm and it works using rolling hash function.

 for the pattern we can check their acsii code values and while traversing the original string first check whether hash function is equal , if it is equal then individually check each elements.
   and the next better algorithm available is KMP algorithm.

   KMP works of LFS array ( longest prefix suffix length array) . The major part is to construct this array and then check the pattern in a given string . The time complexity of this algorithm is O(n+m).

#include <bits/stdc++.h>
using namespace std;

void createlpsarray(string &s , vector<int>&lps){

   lps[0]=0;

   int preindex=0; // prematching index.
   int sufindex=1;

   while(sufindex < s.size()){
      if(s[sufindex]==s[preindex]){
         lps[sufindex]=preindex+1;
         sufindex++;
         preindex++;
      }
      else {
         if(preindex==0){
            lps[sufindex]=0;
            sufindex++;
         }
         else{
            preindex=lps[preindex-1];
         }
      }
      
   }
}

int main(){

    string s1; cin>>s1;
    string s2; cin>>s2;  // pattern which we have to search 
    int n=s2.size();

    vector<int>lps(n);
    vector<int>result;

    createlpsarray(s2,lps);

    int i=0;
    int j=0;

    while(i<s1.size() && j<s2.size()){
      if(s1[i]==s2[j]){
         i++;
         j++;
         if(j==s2.size()){
           result.push_back(i-j+1);
           j=lps[j-1];
         }
      }
      else{
         if(j!= 0){
            j=lps[j-1];
         }
         else{
            i++;
         }
      }
    }
    

    for(auto val : result){
      cout<<val<<" ";
    }

    return 0;
}


The MAIN GAME is to create LPS array.
 I spent one complete day understading how lps array can be created, the day was 17/05/2025.
  The logic behind creating lps array is we have to find that index upto which the substring would have been similar if something mismatch wouldn't have occured. the point at which mismatch has occured 
  is the main issue and we have to go and ask previous step that what was your lps and then start checking again from that point instead of going back to zero and checking again . that is the main concept 
 behind it . It is a very good problem and algorithm.
