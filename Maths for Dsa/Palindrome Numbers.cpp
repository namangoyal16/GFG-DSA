PROBLEM STATEMENT: CHECK WHETHER A NUMBER IS A PALINDROME OR NOT .
SOLUTION : A PALINDROME NUMBER'S REVERSE IS SAME AS ORIGINAL NUMBER.


MY SOLUTION :

#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(int n){
  // a number is palindrome if it's reverse is same as that of original number.
  int original_number=n;
  int reverse_number=0;
  while(n>0){
  	reverse_number=(reverse_number*10)+(n%10);
  	n=n/10;
  }

  if(reverse_number==original_number){
  	return true;
  }
  else{
  	return false;
  }
}


int main(){
	int n;
	cin>>n;
	cout<<check_palindrome(n);
	return 0;
}

Time complexity : O(logn) as we are iterating over the length of the number once.
Space complexity : O(1)+O(1)==O(1) as we are requiring two extra variables of constant space to solve the problem.

// BRUTE FORCE APPROACH :

STORE THE DIGITS IN AN ARRAY AND TAKE TWO POINTERS , ONE FROM START AND ONE FROM END AND CHECK WHETHER BOTH POINTERS HAVE SAME VALUE AND THEN ITERATE;
BUT IT WILL HAVE AN EXTRA SPACE COMPLEXITY OF O(N) BY STORING THE NUMBER WHICH IS BAD.

