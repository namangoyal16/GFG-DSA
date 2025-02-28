We have to check whether a number is prime or not.

Simple solution :

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag=true;

	if(n==1){
		flag=false;
	}
	
	for(int i=2;i<n;i++){
      if(n%i==0){
      	flag=false;
      	break;
      }
	}

	if(flag){
		cout<<"yes a prime";
	}
	else{
		cout<<"not a prime";
	}
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

THe above code has a time complexity of O(n);
but we can improve the time complexity to sqrt(n);

Now the thing is we can check upto sqrt(N) , if we do not get a divisor there , then for sure no divisor will exist after sqrt(N).

Proof :
Divisors come in pair,If we get any divisor which is greater than sqrt(N) then there must exist other divisor less than sqrt(N).
But we have contradicted this statement by stating that we are not getting any divisor in less than that of sqrt(N) , so for sure no divisor will exist in greate than sqrt(N) part.
