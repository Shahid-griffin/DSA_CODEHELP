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

bool comp(pair<int,int> p1, pair<int,int> p2){
    return p1.second <p2.second;
}
vector <int> approch1(vector<int> arr ,int k ,int x){
    vector<pair<int,int>> ans;
    vector <int > ans1;
    for( auto k: arr){
        ans.push_back({k, abs(k-x)});
    }
    sort(ans.begin(), ans.end(),comp);
    for(auto l: ans){
        cout<<l.first<<" "<<l.second<<endl;
    }

    for(int i=0;i<k;i++){
        ans1.push_back(ans[i].first);
    }
    return ans1;
}

 int main(){
    vector<int > arr{1,2,3,4,5};
    int k =4,x=3;
   vector<int> ans= approch1(arr,k,x);
   for(auto k: ans){
    cout<<k<<" ";
   }
    
 }