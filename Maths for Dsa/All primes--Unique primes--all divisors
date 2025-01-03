First problem is to check all prime factors and if repetition occurs then show that also.

Simple solution.
Think in terms of lowest prime_factor , divide upto when you are able to divide.
For ex: divide 12 by 2---it becomes 6
then divide 6 by 2---it becomes 3
and in each iteration store 2 in a vector.

REMEMBER ONE THING FOR TIME OPTIMIZATION AND THAT IS ===> RUN LOOP FROM i=2 TO i=sqrt(N).
ONE CASE MY OCCUR WHERE YOU DO NOT GET ANY PRIME BEFORE SQUARE ROOT OF N , THAT MEANS THAT NUMBER ITSELF IS PRIME , SO ADD THAT ALSO.

CODE:
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

    vector<int>all_primes;

	for(int i=2;i*i<n;i++){
		while(n%i==0){
          all_primes.push_back(i);
          n=n/i;
		}
	}

	if(n>1){
		all_primes.push_back(n);
	}

	for(auto ele : all_primes){
		cout<<ele<<" ";
	}
	return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2nd problem is :
now find only unique primes:
just a simple modification :

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int>unique_primes;

	for(int i=2;i*i<n;i++){
		if(n%i==0){
			unique_primes.push_back(i);
		}
		while(n%i==0){
			n=n/i;  // instead of updating the vector everytime , just update once and then divide the number by i continuously.
		}
	}

	if(n>1){
		unique_primes.push_back(n);
	}

	for(auto ele : unique_primes){
		cout<<ele<<" ";
	}
	return 0;
}

...............................................................................................................................................................................................

3rd problem is , find all divisors:

A simple solution lies in the fact that is ----> one divisor you will get before sqrt(N) and the corresponding other divisor you will get after sqrt(N) , just add both the divisors in the 
array and print them .

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>all_divisors;
	for(int i=1;i*i<=n;i++){
      if(n%i==0){
      	all_divisors.push_back(i);
      	if(n/i != i){
      		all_divisors.push_back(n/i);
      	}
      }
	}

	sort(all_divisors.begin(),all_divisors.end());

	for(auto ele : all_divisors){
		cout<<ele<<" ";
	}
	return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
The problem statement is calculate divisor and its power ,

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<pair<int,int>>prime_power;

	for(int i=2;i*i<=n;i++){
		int count_of_divisor=0;
		while(n%i==0){
            count_of_divisor++;
            n=n/i;
		}
		if(count_of_divisor!=0){
			prime_power.push_back({i,count_of_divisor});
		}
	}

	if(n>1){
		prime_power.push_back({n,1});
	}

	for(auto ele : prime_power){
		cout<<ele.first<<" the power is: "<<ele.second<<endl;
	}
	return 0;
}

// this vector stores prime_divisor and its power.
