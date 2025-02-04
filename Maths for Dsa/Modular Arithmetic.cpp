Modualr arithmetic is mathematical technique to deal with remainders.

Always remember that when we divide Dividend/divisor , the Remainder will always be surely less than the divisor and this is the keyconcept for Modular Arithmetic.

A ≡ B(mod M) means when A is divide by m it leaves a remainder of b.

There are some rules , which are needed to be remembered for Modular Arithmetic.  // Usually we keep M=1e9+7; 1e9 because it is the range of int and +7 becase it makes it prime which is needed
for "FERMAT LITTLE THOREM".


#Modular addition: 
(A+B) % M =(A % M + B % M) % M.

Modular Multiplication:
(A*B) % M =(A % M * B % M) % M.

Modular Divison:
(A/B) % M = (A * inverse of B if it exists) % M.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Modular inverse of a number with respect to m .

Remember the example of modular inverse of 4 with respect to 11 is 3.
because when 4*3 is divided by 11 , the remainder obtained is 1.
===> if we have to find modular inverse of a with respect to m .

1) first of all , a and m should be coprime that is they should have their prime factors as 1.
2) after it , there are 2 methods to calcualate modular inverse , fisrt using Euclids extended divison theorem  and  2nd fermats little theorem .

we will use Fermats little theorem , for m being a prime number and __gcd(a,m)=1.
a^m−1 ≡ 1(mod m).
therefore for a , its modular inverse is (a^m-2)mod m;

we will use Extended Euclid Algorithm , for m not being a prime number .
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#Modular exponentiation:

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int modpower(int a , int b , int m){

    if(b==0){
        return 1;
    }

    long long u =modpower(a,b/2,m);

    if(b%2==0){
        return (u*u)%m;
    }
    else{
        return (a*u*u)%m;
    }
}

int main()
{ 
    cout<<modpower(5,2,7)<<endl;
    return 0;
}

here we have to check that the values should not overflow their limit.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



