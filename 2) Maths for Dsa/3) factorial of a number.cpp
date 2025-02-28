Find The factorial of a number.

RAW APPROACH: 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int factorial=1;
	for(int i=n;i>=1;i--){
	  factorial*=i;
	}

	cout<<factorial;
	
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

RECURSIVE APPROACH: 

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<factorial(n);
	return 0;
}

ONE MORE OPTIMIZATION CAN BE DONE IN THE PROGRAM AND THAT IS WE CAN CREATE A DP ARRAY TO STORE THE OUTCOMES OBTAINED PREVIOUSLY, THIS APPROACH WILL HELP US IN SOLVING QUESTIONS SUCH AS WHEN 
"Q" QUERIES ARE GIVEN AND THEN THEY ARE ASKING TO FIND THE FACTORIAL OF A NUMBER.

TIME COMPLEXITY : O(N);
SPACE COMPLEXITY FOR RAW ITERATIVE APPROACH ==O(1)
SPACE COMPLEXITY FOR RECURSIVE APPROACH==O(n);
