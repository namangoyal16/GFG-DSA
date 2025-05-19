Problem Statement: we have to find the length of the longest substring with distinct characters.

  Code : 
  #include <bits/stdc++.h>
using namespace std;



int main(){

   string s; cin>>s;
   int n=s.size();

   map<char,int>mp;

   int maxlen=0;
   int i=0;
   int j=0;

   while(i<n && j<n){
      if(mp.find(s[j])==mp.end()){
         maxlen=max(maxlen,j-i+1);
         mp[s[j]]=j;
         j++;
      }
      else{
        i=mp[s[j]]+1;
        mp.erase(mp.find(s[j]));
      }
   }

   cout<<maxlen;

  return 0;
}

Time complexity : O(n).
Space complexity : O(n).
