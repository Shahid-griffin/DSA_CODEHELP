#include<iostream>
using namespace std;

 void rec(string &s, string part, int  pos){
    if(pos == string :: npos){
        return ;
    }

    s.erase(pos,part.length());
    pos=s.find(part);
    rec(s,part,pos);
 }

int main(){

    string s="gdhsosofmrhrabcabcabcabcacb";
    string part="abc";


    // int pos= s.find(part);

    // while( pos !=  string :: npos){
    //     s.erase(pos,part.length());
    //     pos=s.find(part);
    // }
    int pos=s.find(part);
    rec(s,part,pos);
    cout<<s;
}
//space comples
// O(nm) for sear


/**/