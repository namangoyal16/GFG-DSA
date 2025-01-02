PROBLEM STATEMENT: WE HAVE TO FIND TRAILING  ZEROES IN LARGE FACTORIAL OF NUMBERS SUCH AS 100 FACTORIAL.

//MAIN PROBLEM===LARGE FACTORIAL MAY OVERFLOW AND CAN CAUSE PROBLEM IF WE GO AND DIRECTLY FIND THEM.
SO WE HAVE TO USE CLASS 11 APPROACH OF FINDING TRAILING ZEROES .

TRAING ZEROES=FLOOR(N/5)+FLOOR(N/25)+FLOOR(N/125)+............
BECOZ NO OF 2s will always be more than number of 5s , so it is better to see how many %s we can get , and that will be enough for us to calculate the trailing zeroes.

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int count_of_powers_of_5=0;

    int pow_of_5=5;

     while(pow_of_5<=n){
     	count_of_powers_of_5+=floor(n/pow_of_5);
     	pow_of_5*=5;
     }


    cout<<count_of_powers_of_5;
	return 0;
}

TIME COMPLEXITY=O(logN);
SPACE COMPLEXITY=O(1);
