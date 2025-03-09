Q----> we have to calculate the number of bits which ares set in a certain number .

basic method :
#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
   int count=0;
   while(n>0){
   	if(n&1){
   		count++;
   	}
   	n=n>>1;
   }
   return count;
}


int main(){

	int n ; 
	cin>>n;

	cout<<count_set_bits(n);

}

// time complexity ==> logn
//space complexity ==> 1

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Brian Kernighan algorithm : to calculate set bits in O(no. of bits)

#include <bits/stdc++.h>
using namespace std;

int brian_kernighan(int n){
	int count=0;
	while(n>0){
		count++;
		n=(n&(n-1));
	}
	return count;
}


int main(){

	int n ; 
	cin>>n;

	cout<<brian_kernighan(n);

}

