Problem Statement : we have to compute  a^b. 
 Solution:

One simple approach says run a loop for b times , you will get power ,
but here Time Complexity== O(N)--> which is not good though.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Another approach is to use Recursion for computing powers, and apply dp for memoization.

#include<bits/stdc++.h>
using namespace std;

int powerof(int a , int b){
   
   if(b==0){
   	return 1;
   }

	if(b%2==0){
		return powerof(a,b/2)*powerof(a,b/2);
	}
	else{
		return a*powerof(a,b/2)*powerof(a,b/2);
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<powerof(a,b);
	return 0;
}  

Time complexity  ===> O(N) as 1+2+4+8...logn times .

----------------------------------------------------------------------------------------------

A little better approach is :

#include<bits/stdc++.h>
using namespace std;

int powerof(int a , int b){
   
   if(b==0){
   	return 1;
   }
   
   int half=powerof(a,b/2);

	if(b%2==0){
		return half*half;
	}
	else{
		return a*half*half;
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<powerof(a,b);
	return 0;
}  

This has time complexity of O(logn) times because , the 1+1+1+1....logN times;

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Another approach is using bit magic:

#include<bits/stdc++.h>
using namespace std;

int powerof(int a , int b){
	
	int powofa=a;
	int result =1;

	while(b>0){
		if(b&1){
			result=result*powofa;
		}
		powofa=powofa*powofa;
		b=b>>1;
	}
	
	return result;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<powerof(a,b);
	return 0;
}  

Time complexity==>O(logn);

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
