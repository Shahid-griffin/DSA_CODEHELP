#include<iostream>
using namespace std;
//problem to find the 1 last occ via rec
 //approch 1 to traverse from the end and return  the forstt element found
 void las(string st, int no , char ch, int &ans){
    if(no<0){
        return ;
    }

    if(st[no] == ch){
        ans=no;
        return ;
    }
     las(st,no-1,ch, ans);
 }

  int las2(string st, int no , char ch , int &x){
    if(no==st.length()){
        return x;
    }

    if(st[no] == ch){
        x= no;;
    }
     las2(st,no+1,ch,x);
 }

int main(){
    string s= "raabbccddeehhf";
    int sno= s.size()-1;
    int x=-1;
    las(s,sno,'d',x);
 
    
    // las2(s,0,'r', x);
    cout<<x<<endl;
}

// time compl = O(n)
// space cmple = O(n)