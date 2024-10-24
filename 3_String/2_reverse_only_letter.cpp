class Solution {
public:
    string reverseOnlyLetters(string s) {
        if (s.size()==0){
            return s;
        }

        int i=0;
        int j=s.size()-1;

        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i++],s[j--]);
            }
            else if( !isalpha(s[i])){
                i++;
            }else{
                j--;
            }
        }
        return s;
        
    }
};

/* isaplha is use to check if its a alphabet*/