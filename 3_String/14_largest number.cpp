class Solution {
public:

    static bool comp(string a,string b){
        string c=a+b;
        string d=b+a;

        return c>d;
    }

    string largestNumber(vector<int>& nums) {


        vector <string> st;

        for(  auto k: nums){
            st.push_back(to_string(k));
        }
        sort(st.begin(),st.end(),comp);
        if(st[0]=="0"){return "0";}
        string ans="";

        for( auto l:st){
            ans+=l;
        }
        return ans;
        
    }
};