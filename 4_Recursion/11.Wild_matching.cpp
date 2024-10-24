/* SC =O(n)
   Tc= o(2^n)
logic  me hamnormal compare karenge si piagar pi ==? hai to dono ko am++ kr denge 
abb agar * mila tb 2 case bnaagbe 1 jisme ham usko null mah rahe  hai us case me bhi pi ++ hoga 
case 2 me uso ek vale manrah  rahe  hai to si ++ karenge pi isiliye nh ikarenge kyu ki vo ek se jyada valseu le sakhta ahi 
isem incl and exc ka principle lga  hau hai 

*/



#include<iostream>
using namespace std;

bool rec( string &s,int si,string &p,int pi){

    // base
    if(si == s.size() && pi==p.size()){
        return  true;
    }
    if( si == s.size() && pi<p.size()){
        while(pi<p.size()){
            if( p[pi++] != '*');
            return false;
        }
        return true;
    }
    if(s[si] == p[pi]|| p[pi]=='?') {
        return rec(s,si+1,p,pi+1);
    }

    if(p[pi] == '*'){

        bool CaseA = rec(s,si,p,pi+1);
        bool CaseB = rec(s,si+1,p,pi);
        return CaseA || CaseB;
    }
    return false;
}

int main(){

    string a="hhshh";
    string p="hh*h";
    cout<<rec(a,0,p,0);
}
