/*logic

*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string  rec (vector<string> &arr){
     int i=0;
     string ans="";
     while (true)
     {
          char curr_ch=0;
       for( auto kk : arr){
          if(i>=kk.size()){
               curr_ch=0;
               break;
          }
          if(curr_ch==0){
               curr_ch=kk[i];
          }
          else if(kk[i] != curr_ch){
               curr_ch=0;
               break;
          }
       }
       if(curr_ch==0){
          break;
       }
       ans.push_back(curr_ch);
       i++;
     }
     return ans;
     

}

int main(){
     vector<string> arr ={"flower","flow","floight"};
 cout<<rec(arr); 
}