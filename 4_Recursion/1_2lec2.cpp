#include<iostream>
using namespace std;

//rec fucbtion to print element of arr
void printupton(int *arr  , int n, int x){
    if( x == n){
        return;
    }
    cout<<arr[x];
    printupton(arr,n,x=x+1);
}

// for max number imp pt is ham bar stack me new int banega to int ki value change hoti ragehi
// isisliye ham int  ko pass by refernace bhej rahe ahi taki sam e hi int me value change hot 
// rahe

int maxof(int * arr , int element , int i,int &maxi){
    if( i == element){
        return 0;
    }

    maxi =  max (maxi,arr[i]);
    maxof(arr,element, i+1,maxi);

    return maxi;

}


//find the chnec in string 

bool  findstt(string s,int n, char key ,int i){
    if( i == n){
        return 0;
    }

    if(s[i] == key){
        return 1;
    }else{
        return findstt(s,n,key,i+1);
    }
}

void printdigit(int n){
    if( n == 0){
        return ;
    }

   
    printdigit(n/10);
     cout<<n%10<<" ";

}
int main(){

    // int arr [6]= {1,2,3,24,5,6};
    // int ans=0;
   printdigit(12345);
}