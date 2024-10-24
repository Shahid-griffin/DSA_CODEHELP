/*you are given an array of size n with distint elemenet you have to find the 
sum with minimun nimber of element possible

arr = 1,2,3;
sum = 5
infinite elemt of array means you can have n numbr of 1 
*/

#include<bits/stdc++.h>
using namespace  std;

int rec(int *arr, int n,int sum ){
    if(sum == 0){
        return 0;
    }
    if(sum < 0){
        // return islye kiya kyu ki koi valid value nhi thi and ham mini le rahe the vo 
        // max value return krdi 
        return INT_MAX; 
    }
    // mimin value 
    int mini = INT_MAX;

//is loop se ham har stage pe size of arry k hisabse condition check kr rahe the 
// uss ehame answer mil jata hai 

    for(int i =0;i<n;i++){
        int ans =rec(arr,n,sum-arr[i]);
            if( ans != INT_MAX){
                //ans me +1 islye kiya hai kyu ki ham target - a[i] ki value nial arahehai 
                // na ki taget ki isisliye ek condition +1 hai i step

                mini = min (ans+1,mini);
            }
    }
    return mini;

}

/*Questp      we are given  rod of lenghth N we are given n no of segament 
we have to find max no of cut we have make provided 
we can only make cut of n segmnet provided
*/

int sagment(int n, int x, int y, int z){
    if( n == 0){
        return 0;
    }
    if( n<0){
        return INT_MIN;
    }

    int ans = INT_MIN;


    int a = sagment(n-x,x,y,z)+1;
    int b = sagment(n-y,x,y,z) + 1;
    int c = sagment(n-z,x,y,z)+ 1;

    return max(a,max(b,c));

}

// sum of pair non adjacent use same inc and ecl principle

void maxinonadjacent( int *arr , int n, int i, int sum ,int &maxi ){
    if( i>=n){
        maxi = max(sum , maxi);
        return ;
    }

    //include
    maxinonadjacent(arr,n,i+2,sum+arr[i],maxi);

    //exclude
    maxinonadjacent(arr,n,i+1,sum,maxi);
    
}

int main(){

//  int arr [3]={1,2,5};
//  cout<<rec(arr,5,7);
// cout<<sagment(7,5,2,2);
int arr[4]{100,20,4,5};
int maxi =0,sum=0;
maxinonadjacent(arr,4,0,sum,maxi);
cout<<maxi;
}