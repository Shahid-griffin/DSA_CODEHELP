#include<iostream>
using namespace std;

void rec_util( string s,  int it ,int j){
    if( j== s.size()){  // base case
        return ;
    }
    for(  int i=it;i<=j;i++){
        cout<<s[i]<<" ";      // print all elemeebt
    }
    cout<<endl;
    rec_util(s,it,j+1);
}

void rec(string s){
    for(int i=0;i<s.size();i++){
        rec_util(s,i,i); // i and i isisliy use kiys hai tai iteratoion usi elemet se shuru ho
    }
}

int main(){

    string s="12345";
    int i=0,j=0;
    rec(s);
}
/*
 time complex  O(n)* (o(n)+o (n-1)+ o(n-2) ------0)
o(n)* o(n);
o(n2);

space is O(n)
bc we have to move from sts
after first iterationof rec stck will be fill upto 7 mark
then it will be erase to do 2 iteration utp 6 mark  so SC will lock like o(n+2);
*/