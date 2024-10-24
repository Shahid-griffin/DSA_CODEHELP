class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char ch[256]={0};
        bool check[256]={0};

        for ( int i=0;i<s.size();i++){
            if( ch[s[i]] == 0 && check[t[i]] == 0){
                ch[s[i]]=t[i];
                check[t[i]]=true;;
            }
        }

        for( int i=0;i<s.size();i++){
            if((ch[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
        
    }
};