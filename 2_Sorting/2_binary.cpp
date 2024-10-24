#include<bits/stdc++.h>
using namespace std;

int sq(int n){
    int i=1,j=n;
    int mid = i+(j-i)/2;
    int ans=0;
    
    while( i<=j){
        int s= mid*mid;

        if(  s == n){
            return mid;
        }else if( s > n){
            j=mid-1;
        }else{
            ans= mid;
           i= mid+1;
        }
        mid = i+(j-i)/2;
    }
    return ans;
}


int bs2d(int arr[][4],  int row, int col, int key){
    int i=0;
    int j= row*col -1;
    int mid = i+(j-i)/2;

    while( i<=j){
       // to cal row we have formula mid/col
       // for col  formula  = mid%col;
       
        if( arr[mid/col] [ mid%col] == key){
            return mid;
        }else if( arr [mid/col][mid%col] > key){
            j=mid-1;
        }else{
            i=mid+1;
        } mid = i+(j-i)/2;

    }
    return -1;
}
int main(){

    // cout<<sq(16);
    // above code wil give au the int value but fi we need precisio er have to ru lloop

   /* int preicision =4;
    float ans =sq(30);
    float step= 0.1; 

    for( int i =0;i<preicision;i++){
        for(double k=ans ; k*k <= 30;k=k+step){
            ans=k;
        }
        step/=10;
    }
    cout<<"  "<<ans;
    */

   int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   cout<<bs2d(arr,4,4,112);
}