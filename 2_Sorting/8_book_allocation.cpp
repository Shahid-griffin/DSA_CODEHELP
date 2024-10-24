#include<bits/stdc++.h>
using namespace std;

bool book( int arr[], int n,int m,int mid){
    int sum =0;
    int k=1;
    for( int i=0;i<n;i++){

       if(arr[i] > mid){
            return false;
        }
        if( sum + arr[i] <= mid){
            sum+=arr[i];
        }else{
            sum = arr[i];
            k++;
            if( k>m){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr[]={20,30,40,60};

    int n=4,m=2;
        if(n<m){
        return 0;
    }
    int sum =0;
    for(auto l: arr){
        sum+=l;
    }
    cout<<sum;

    int i=0,e=sum,mid= (i+e)/2;
    cout<<mid;
    int ans=-1;
    while(i<=e){
        if(book(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            i=mid+1;
        }
        mid= (i+e)/2;
    }

    cout<<ans;
}