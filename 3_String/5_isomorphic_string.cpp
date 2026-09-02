/*Bilkul. Interview mein explain karne ke liye **Hindi + English mix** mein simple 10 points:

1. Sabse pehle mujhe check karna hai ki `s` ke characters ko `t` ke characters mein consistently map kiya ja sakta hai ya nahi.

2. **Har character ka ek fixed mapping hona chahiye.** For example, agar `a → b` hai, toh baad mein `a → c` nahi ho sakta.

3. Saath hi mapping **one-to-one** honi chahiye. Do different characters same character ko map nahi kar sakte.

4. Isliye main `ch[256]` array use kar raha hoon, jo `s` ke character ka `t` mein mapping store karega.

5. Main `check[256]` boolean array use kar raha hoon, jo batayega ki `t` ka koi character already kisi aur character ko assign ho chuka hai ya nahi.

6. Main dono strings ko same index par traverse karta hoon, kyunki corresponding positions ke characters ka mapping check karna hai.

7. Agar `s[i]` ka mapping abhi nahi bana hai aur `t[i]` already kisi aur character ko assigned nahi hai, toh main mapping create karta hoon:
   `s[i] → t[i]`

8. Agar `s[i]` ka mapping already present hai, toh main naya mapping nahi banata. Baad mein verify karta hoon ki existing mapping `t[i]` ke equal hai ya nahi.

9. Second loop mein main har character ka mapping verify karta hoon. Agar `ch[s[i]] != t[i]`, toh iska matlab mapping inconsistent hai, so I return `false`.

10. Agar poori string successfully verify ho gayi, toh I return `true`. **Time Complexity O(n)** hai aur **Space Complexity O(1)** hai because arrays ka size fixed 256 hai.
 */






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