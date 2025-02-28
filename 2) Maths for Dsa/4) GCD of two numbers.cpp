WE HAVE TO FIND GCD/HCF OF TWO GIVEN NUMBERS.

BUILTIN FUNCTION:
__gcd(a,b)  ----- this function directly gives gcd of two numbers.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Another way is class 9th way:

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	if(b%a==0){
		return a;
	}
	else{
		return GCD(b%a,a);
	}
}
int main(){
	int a,b;
	cin>>a>>b;

    cout<<GCD(a,b);
	return 0;
}

// this approach uses euclid divison lemma , in which let say b is greater than a , if a is able to divide b then a is the gcd .
otherwise take the remainder of [b%a] and make it as divisor and a as dividend and continue it upto when you get result.

TIME COMPLEXITY:O(logn);
Space complexity:O(logn);

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

similary we can calculate LCM of two numbers which is a*b=gcd*lcm.
