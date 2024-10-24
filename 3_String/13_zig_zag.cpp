class Solution {
public:
    string convert(string s, int numRows) {
            if(numRows==1){
        return s;
    }
    int i=0;
    int row=0;
    vector<string> st(numRows);
    int dir=1;

    while( true){
        if(dir==1){
            while(row<numRows && i<s.size() ){
                st[row++].push_back(s[i++]);
            }
            row=row-2;
        }else{
            while (row>=0 && i<s.size()){
                st[row--].push_back(s[i++]);
            }row=1;
        }
        dir=!(dir);
        if(i>=s.size()){
            break;
        }
    }
    string ans="";
    

    for(auto k:st){
        ans+=k;
    }
    //cout<<ans;
    return ans;
        
    }
};