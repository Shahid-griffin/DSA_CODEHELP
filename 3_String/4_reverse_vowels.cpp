class Solution {
public:
    bool isvowel(char ch){
        ch=tolower(ch);
        return ch == 'a'||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u';
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;

        while( i<j){
            if (isvowel(s[i]) && isvowel(s[j])){
                swap(s[i++],s[j--]);
            }
            else if(isvowel(s[i]) && !isvowel(s[j])){
                j--;
            }else{
                i++;
            }
        }
        return s;
        
    }
};