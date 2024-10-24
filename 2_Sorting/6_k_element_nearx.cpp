/*658 leetcode  find k closest element */
/* is q me hame arry me ek eleent k k closedt element batane  hai  jaisse ki k arr ahi 
12356 ans eleemt hai 3 to bche hue 2 closedt elemt (mod( 3-x) )  kr k dekhnegge
 jo chota hoga a,b me vo lenege ans is 23 ek to vo element khud hoga kyu ki  vo 0 ans hai 
 mod lenge to */

 // approch 1 me 
 /*ham e new array ya container banayenge usme x m=k sath sabka mode diff lenge 
 uske baad ham usko sor karnge  wiith  decendeing order bases on the diff*/

 //approch one

 #include<bits/stdc++.h>
 using namespace std;

vector <int> approch1(vector<int> arr ,int k ,int x){
    vector<pair<int,int>> ans;
    vector <int > ans1;
    for( auto k: arr){
        ans.push_back({k, abs(k-x)});
    }

    for(auto l: ans){
        cout<<l.first<<" "<<l.second<<endl;
    }
    // sort or karna hai base on second eeemet
    for(int i=0;i<k;i++){
        ans1.push_back(ans[i].first);
    }
    //return krne se pehle sort krlena

    return ans1;
}
 /*Two ponter approch  hai isme sabse pehle sort fir  i=0 an se = end se start krte hai 
agar arr[i] - arr[k] >x  i++ else j-- or ye tk tk karenge jb tk while ( l-k >=x)
usse hame ek range mil jayegi fir vect me return kr rdege */
    vector<int> approch2(vector<int> arr , int k , int x ){
        int i =0,j=arr.size()-1;
        sort(arr.begin(),arr.end());

        while( j-i>=x){
            if( x-arr[i]> arr[j] - x){
                i++;
            }else{
                j--;
            }
        }
        return vector<int> (arr.begin()+i,arr.begin()+j+1);
    }

 int main(){
    vector<int > arr{1,2,3,4,5};
    int k =4,x=3;
   vector<int> ans= approch1(arr,k,x);
   for(auto k: ans){
    cout<<k<<" ";
   }
    
 }