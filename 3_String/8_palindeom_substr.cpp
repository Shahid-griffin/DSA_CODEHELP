class Solution {
public:

bool palindrome(string &s,int i,int j){
    while( i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int n=s.size();
        
    int max=INT_MIN;
    string ans;
    for (int i = 0; i < n; i++) {
       
         
        for (int j = i; j < n; j++) {
           string st="";
             
            // cout<<st<<" ";
            if(palindrome(s,i,j)){
                st=s.substr(i,j-i+1);
                ans= st.size() >ans.size() ? st:ans;
            }
           
        
    }
}
return ans;
    }
};