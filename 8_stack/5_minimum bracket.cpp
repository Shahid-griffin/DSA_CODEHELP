/*
probel me  hami minimum no  of reversal batane hai aki bracket equal ho jaye 
fo normal ham pehle  valid palrentheis walo algo karenge 

fir bahe hue  element ka pair check karenge  kya a ==b hai to  ha rev me ++ karenge kyuki ek k change krne se hi 
valid  ho jayega  
if a != b hai to  rev + 2  hame dono ko hi change krna padeg a

first check krne ki length even hai verna retur -1 nhi to pair k  time top search krne me  me error ayega */
 



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    
     if( s.size() & 1 == 1){
        return -1;
    }
    int rev =0;
    stack<char> st;

    for(auto it: s){
        if ( it == '{'){
            st.push(it);
        }else if ( !st.empty() && st.top() == '{'){
            st.pop();
        }
        else{
            st.push(it);
        }
    }

    while( !st.empty()){
        char a= st.top();
        st.pop();
        char b  = st.top();
        st.pop();
        if( a == b){
            rev ++;
        }else{
            rev=rev+2;
        }
    }
    return rev;
}