
//approch 2
class Solution {
public:
    bool isAnagram(string s, string t) {
        int chr[256]={0};

        for( int i=0;i<s.size();i++){
            chr[s[i]]++;
        }

         for( int i=0;i<t.size();i++){
            chr[t[i]]--;;
        }
        
         for( int i=0;i<256;i++){
            if(chr[i]!=0)
            return false;
        }
        return true;
        
    }
};

// Approch 1 
     //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());

    //     return (s==t)?1:0;
        
    // }