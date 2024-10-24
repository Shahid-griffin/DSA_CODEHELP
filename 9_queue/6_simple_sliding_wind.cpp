/*this is sample code for sliding window probem
ew ahve to find the first non -ve eleent in k side windoe
step 1 put k valuein queue les then 0
step 2 run loop from k+1 to n 
step 3 check if its emty if yes then print 0
step */
#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr [10]={1,2,5,-9,4,-8,-3,1,-7,10};
    queue<int> q;
    int k =3;

    for( int i =0;i<k;i++){
        if(arr[i]<0){
        q.push(i);}
    } 
    for( int i = k;i<10;i++){
        if(q.empty()){
            cout<<0<<" ";
        }else{
            cout<<arr[q.front()]<<" ";
        }

        while((!q.empty()) && (i-q.front()>=k)){
            q.pop();
        }
        if( arr[i]<0){
            q.push(i);
        }

    }

    if(q.empty()){
        cout<<0<<" ";
    }else{
        cout<<arr[q.front()];
    }
}