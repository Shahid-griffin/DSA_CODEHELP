#include<iostream>
#include<vector>
using namespace std;
// this cde is use to priint the seq of array 
// approh is to make 2 sol at each step one is  to inc
// another d not ti einclud

void sub( string s,vector<string> &ans,string otp, int i ){
    if( i==s.length()){
        ans.push_back(otp);
        //cout<<otp<<endl;
        return;
    }

    sub(s,ans,otp,i+1);
    otp+= s[i];
    sub(s,ans,otp,i+1);
}

int  main(){

    vector<string> ans;
    string s= "abc";
    string otp="";

    sub(s,ans,otp,0);

    for( auto l : ans){
        cout<<l<<" ";
    }
}