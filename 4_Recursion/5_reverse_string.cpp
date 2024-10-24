#include<iostream>
using namespace std;

void rev(string &st,int s, int e){
    if( s>=e){
        return ;
    }

    swap(st[s],st[e]);
    rev(st,s+1,e-1);

}
int main(){
string st="abcde";
rev(st,0,4);
cout<<st;
}


/*time comples
n/2 hora hai hamesha to ham isse N/2 mansa hte hai  kyuki ye hamesha  ho raha 
O(n)  as 1/2 is constant

space me 
arr n/2 space 
s e is k contsnat space 
 so O(n/2  +1 k)
 n/2 isisliye jab stack me call hoga to n/2 time hi jaryatr  padegi hame 
 to ye O(N)
 */