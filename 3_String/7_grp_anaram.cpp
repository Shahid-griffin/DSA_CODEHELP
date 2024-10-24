/*Approch 1
tc =O(Nklogk) k= lenght of longest sring
sc=O(nk)
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for( auto it: strs){
            string i=it;
            sort(i.begin(),i.end());
            mp[i].push_back(it);
        }

        vector<vector<string>> ans;
         for( auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
         }
         return ans;
    }
};



/*
approch 2
tc= (o(n k)  k = size of longest string)
sc= o(nk) + O(mk) (map size)

class Solution {
public:
    std:: array<int,256> hash(string s){
        std::array<int,256>mp={0};
        for( int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        return mp;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<std::array<int,256>,vector<string>>mp;

        for(auto str:strs){
            mp[hash(str)].push_back(str);
        }
        vector<vector<string>> st;

        for( auto it=mp.begin();it!=mp.end();it++){
            st.push_back(it->second);
        }   
        return st;
    }
};
*/