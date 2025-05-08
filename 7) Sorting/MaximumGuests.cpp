Problem Statement : we have to meet the maximum numbers of guests coming in party : 
Solution sort and think of merging and overlapping intervals and find count of maximum intervals overlapped .

  Code : 

#include <bits/stdc++.h>
using namespace std;

int maximumGuests(vector<vector<int>>&arrdep){
  int n=arrdep.size();
  sort(arrdep.begin(),arrdep.end());

  int count=1;
  int maxCount=1;
  
  int lp=arrdep[0][0];
  int hp=arrdep[0][1];

  for(int i=1;i<n;i++){
    if(arrdep[i][0]<=hp){
      count++;
      hp=max(hp,arrdep[i][1]);
    }
    else if(arrdep[i][0]>hp){
      maxCount=max(maxCount,count);
      lp=arrdep[i][0];
      hp=arrdep[i][1];
      count=1;
    }
  }

  maxCount=max(maxCount,count);

  return maxCount;
}

int main(){

  int n;
  cin>>n;

  vector<int>arrival(n);
  vector<int>departure(n);

  for(int i=0;i<n;i++){
    cin>>arrival[i];
  }  

  for(int j=0;j<n;j++){
    cin>>departure[j];
  }  

  vector<vector<int>>arrdep(n, vector<int>(2));

  for(int i=0;i<n;i++){
    arrdep[i][0]=arrival[i];
    arrdep[i][1]=departure[i];
  }

   int ans = maximumGuests(arrdep);
   cout<<ans;

  return 0;
}

Time Comlexity of the code is : O(nlogn).
