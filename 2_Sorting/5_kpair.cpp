//532 leet code 
/* iss question me ham ek uniwe pair batane  hai jika diff k ho arr me */

//approch one
/*2 loop chalateg jiska   agar a[i] and a[k] ka diff  kahi to cnt ++ 
sath me ye or dekhna hai  ki dono pair difftint ho  uske liye ham set bana llnege 
waha pair dal denge */

// approckh 2 
/*two pointer ise ham 2 ponter lenge  i =0 j =1 agar [j]-a[i] == k
t o i++; j++ or set me store kr lenge agar diff bada hai 
to i++ nhi to j+++ ek case hoga jb  i == j hoga or diff =0 hai to 
uss case k lie ham i==j ahi to j++*/

//approch 3 
/* normal iternate  karenge arra ko  fir check karenge bacha hua element 
agar diff k euwal hai k  nhi BS se (a-b = k so s = k+b)
fir set me dall deknge uwie pai  liye */


#include<bits/stdc++.h>
using namespace std;

int approch1(vector<int> arr , int k ){
    int i=0,j=1;
    sort(arr.begin(),arr.end());
    set<pair<int,int>>st;
    while( j<arr.size()){
        if( arr[j]-arr[i] == k){
            st.insert({arr[i],arr[j]});
            i++;j++;
        }else if (arr[j]-arr[i]  >  k){
            i++;
        }else {
            j++;
        }
        if( i==j){
            j++;
        }
    }

    return st.size();
}


//approch 3

 bool bs( vector<int>& nums, int i, int k){
       
        int j=nums.size()-1;
        int mid = i+(j-i)/2;
        while( i<=j){
            if( nums[mid] == k ){
                return true;
            }else if (nums[mid] > k){
                j=mid-1;
            }else{
                i=mid+1;
            }
            mid= i+(j-i)/2;
        }
        return false;
    }

    int approch3(vector<int>& nums, int k) {
        set<pair<int,int>> ans;
        //int ans=0;
        sort(nums.begin(),nums.end());
        for( int i=0;i<nums.size();i++){
            if(bs(nums,i+1,k+nums[i]) ){
                ans.insert({nums[i],k+nums[i]});
            }
        }
        return ans.size();
        
    }
int main(){

}