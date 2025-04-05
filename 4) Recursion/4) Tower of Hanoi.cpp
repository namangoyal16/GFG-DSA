Problem Statement: there are three towers , one is source , one is destination and other one is auxillary(mediator) ,,, now we have to think for the minimum moves required to transfer n discs from tower source
to destination . We ca think function as machine which gives us minimum steps to move n discs from source to destination , now remember one thing how it can be achieved is ...
move n-1  discs from source to auxiullary using destination as a helper tower , now source is left with jus one last disc and and destination is free , move the last disc from source to destination.
now think of moving n-1 discs from auxillary to destination using source as helper . in this manner in minimum number of steps we can move n discs from source to destination.


#include <bits/stdc++.h>
using namespace std;

int moves(int discs , char from , char to , char aux){

    if(discs==1){
        cout<<"move the disc from "<<from<<" to "<<to<<endl;
        return 1;
    }
    
    int count =0;
     count+= moves(discs-1,from,aux,to);
     cout<<"move the disc from "<<from<<" to "<<to<<endl;
     count++;
     count+=moves(discs-1,aux,to,from);

     return count;
}

int main(){

    int discs ;
    char a , b , c;

    cin>>discs;
    cin>>a>>b>>c;

    int ans = moves(discs,a,b,c);

    cout<<ans;
    

    return 0;
}

// time complexity of the code is O(2^n) because we are calling 2 functions at a time .
// Space complexxity of the code is O(n) because at max n functions can be in the function stack.
