/* problem  is to find minimum num of elem to sum up a target 
we have unilimited  supplie of eleemt  in an aarray */

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int coin( int arr[], int k){
    if( k==0){
        return 0;
    }
    if( k <0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for( int i=0;i<3;i++){
        int ans=coin(arr,k-arr[i]);
        if(ans!=INT_MAX)
        mini= min(mini,ans+1);

    }
    return mini;
}

int main(){

int arr[3]={1,2,3};
int k=5;
cout<<coin(arr,k);
}