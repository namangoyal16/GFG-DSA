Sieve of Erathosenes is a concept to check prime numbers and eliminate it's multiples because they ofcourse cannot be prime.

Here it checks for the first prime number , eliminate its multiples .
then check another prime numbers and eliminate its multiples continuously , in this manner we get many numbers eliminated before hand.

CODE:

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;

vector<int>isPrime(N,1);
vector<int>lowest_primefactor(N,0);
vector<int>highest_primefactor(N,0);

int main(){

	isPrime[0]=isPrime[1]=0;

	for(int i=2;i<N;i++){
		if(isPrime[i]==1){
			lowest_primefactor[i]=i;
		    highest_primefactor[i]=i;
			for(int j=2*i;j<N;j+=i){
              isPrime[j]=0;
              highest_primefactor[j]=i;
              if(lowest_primefactor[j]==0){
              	lowest_primefactor[j]=i;
              }
			}
		}
	}

	return 0;
}

Time complexity ===>O(nloglogn);
Because , the loop runs for n(1/2+1/3+1/5+.....) for all primes , which sums up to nloglogn====> almost linear time complexity.
space complexity ===>O(1);

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Sieve of Erathosenes also help in finding out lowest prime factor and highest prime factor easily.
In majority of number theory questions , this step act as preliminary step to solve further more complex problems.
It is must for number theory problems.
