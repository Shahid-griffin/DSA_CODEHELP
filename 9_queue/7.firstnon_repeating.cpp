/*first  non repeating element 
step 1 create fre table to track trac 
step 2 push in the queue
step 3 if queue is not empty then chek if fre is > 1 i yes
 then pop() if not then print or store and break the loop 
 step 4 it  may happen that you  break loop when its empty them  print 
 # as q says to print # if no repeating chr is therre*/


#include<iostream>
#include<queue>
using namespace std;

int main(){

    char arr[10] ={'a','a','b','c','d','b','e','s','q','r'};

    // firts  non repeatng elem t

    int count[ 26] ={0};

    queue<char> q;
    for ( int i=0;i<10;i++){
        count[arr[i] - 'a']++;

        q.push(arr[i]);
        while (!q.empty())
        {
            if( count[q.front() - 'a'] > 1){
                q.pop();
            }else{
                cout<<q.front();
                break;
            }
        }
        
        if(q.empty()){
            cout<<"#";
        }
    }
}