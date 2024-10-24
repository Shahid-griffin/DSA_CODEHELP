#include<iostream>
using namespace std;

bool issorted(int *arr, int n, int i){
    if( i == n){
        return true;
    }

    if(arr[i-1] >arr[i]){
        return false;
    }else{
        return issorted (arr,n,i+1);
    }

}

// code for binary search 
bool bin(int *arr, int i, int e, int key ){
    if( i>e){
        return 0;
    }
    int mid  = i+ (e-i)/2;

    if( arr[mid] ==  key ){
        return key;
    }
    else if( arr[mid] > key ){
       return  bin(arr,i,mid-1,key);
    }else{
        return bin(arr, mid+1,e,key);
    }
}

// pint all substrin of strings

void sub(string s, string o,  int i){

    if( i == s.length()){
        cout<<o<<endl;
        return ;
    }

    sub(s,o,i+1);
    o+=s[i];
    sub(s,o,i+1);
}
int main(){
    int arr[10]={1,2,3,4,500,6,7,8,9,50};
    // cout<<bin(arr,0,9,50);
    sub("abcd","",0);
}