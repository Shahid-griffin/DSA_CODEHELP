

/*
Approach — Reorganize String
First, I count the frequency of every character using a hash[26] array.
Then I find the character having the maximum frequency, because this character has the highest chance of being adjacent to the same character.
Before arranging anything, we need to make sure that this maximum-frequency character can actually be placed without putting two same characters together.
I place the most frequent character at alternate positions: 0, 2, 4, 6...
I do this because alternate positions give the maximum possible gap between identical characters.
If I still have some occurrences of the maximum character left after reaching the end of the string, then it is impossible to arrange the string, so I return "".
Once the most frequent character is placed, I set its frequency to 0 because all its occurrences have been handled.
Now I take the remaining characters one by one and place them in the remaining alternate positions.
When I reach the end of the even positions, I start again from index 1, which gives positions like 1, 3, 5, 7....
Finally, if all characters are placed successfully, I return the reorganized string.
Important intuition

The main idea is:

Place the most frequent character first at alternate positions, then fill the remaining positions with other characters.


767 leetcode
problem to arrange s in such a way that no 2 element can be arrange together
//approch 
1 make hash arr to store fre of char
2 if possileb to arraneg max element inalterattive order to it or return ""
3 arrange the remaing element 
*/

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for( int i=0;i<s.size();i++){
            hash[s[i] - 'a']++;
        }

        char max_ele;
        int max_fre=INT_MIN;

        for( int i=0;i<26;i++){
            if( hash[i]>max_fre){
                max_ele= i +'a';
                max_fre=hash[i];
            }
        }
        // int i=0;
        // for( ;i<s.size();i=i+2){
        //     if (max_fre>0)
        //     {    s[i]=max_ele;
        //          max_fre--;
        //     }           
        //  }
        // above code does not work bc when we loop is fnish i place is far waay 2 iterarion  we shoul se else with break to make t wrk
        int i=0;
        while( max_fre>0 && i<s.size()){
            s[i]= max_ele;
            i=i+2;
            max_fre--;
        }

        if(max_fre != 0){
            return "";
        }

        hash[max_ele- 'a'] = 0;

        for( int j=0;j<26;j++){
            while(hash[j] >0 ){
                i= i>=s.size() ?1:i;
                s[i]=j+'a';
                i=i+2;
                hash[j]--;
            }
        }
        return s;
    }
}