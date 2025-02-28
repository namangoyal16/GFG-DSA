problem statement : A number is given x , find the number of digits in that number.

MY APPROACH :

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	while(n>0){
		count++;
		n=n/10; // just divide the number by 10 and count the digits.
	}

	cout<<count;
	return 0;
}

// time complexity : O(logn)   ==> the loop runs for the length of the digits of the number .
// Space complexity: O(1)   ==> we require no extra space to solve the problem.
