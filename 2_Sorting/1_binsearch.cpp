#include<bits/stdc++.h>
using namespace std;

int bs(int *arr , int n ,int key ){

    int i = 0;
    int j = n-1;
    int mid = j +( i-j)/2;

    while( i<j){
        int add = arr[mid];

        if( add ==  key){
            return mid;
        }else if( add > key){
            j=mid-1;
        }else{
            i=mid+1;
        }
        mid = j +( i-j)/2;
    }
    return -1;
}

//  first occ of an elemet in an arr


int first(int *arr , int n ,int key ){

    int i = 0;
    int j = n-1;
    int mid = i +( j-i)/2;
    int ans=-1;
    while( i<=j){
        int add = arr[mid];

        if( add ==  key){
            ans = mid;
            j=mid -1;
        }else if( add > key){
            j=mid-1;
        }else{
            i=mid+1;
        }
        mid = i +( j-i)/2;
    }
    return ans;
}

// last occ in array 
int last(int *arr , int n ,int key ){

    int i = 0;
    int j = n-1;
    int mid = i +( j-i)/2;
    int ans = -1;

    while( i<=j){
        int add = arr[mid];

        if( add ==  key){
            ans = mid;
            i=mid+1;
            
        }else if( add > key){
            j=mid-1;
        }else{
            i=mid+1;
        }
        mid = i +( j-i)/2;
    }
    return ans;
}
// find the no of ele occ in arr last - firs +1

// fin  the peak element 

int peak( int * arr , int n ){
    int i = 0;
    int j = n-1;
    int mid = i +(j-i)/2;
    
    while( i<j){
        if( arr[mid] <arr[mid+1] ){
            i=mid+1;
        }else{
            j=mid;
        }
        mid = i+(j-i)/2;
    }
    return arr[j];
}

int main(){
    int arr [10] = {1,2,3,5,5,5,5,5,5,10};
    // cout<< last(arr, 10, 5);

    // to find total occ of an element 
    // cout<< last(arr,10,5) - first(arr,10,5) +1 ;
    int arr2[10]={1,2,3,5,6,60,79,6,2,1};
    cout<<peak(arr2,10);

}

