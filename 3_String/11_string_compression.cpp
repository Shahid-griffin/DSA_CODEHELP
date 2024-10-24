class Solution {
public:
    int compress(vector<char>& chars) {

        int index=0;
        int prev= chars[0];
        int cnt=1;

        for( int i=1;i<chars.size();++i){
            if( chars[i] == prev){
                cnt++;
            }else{
                chars[index++]=prev;
                if( cnt>1){
                    int start = index;
                     while(cnt){
                       
                        chars[index++]=cnt%10 +'0';
                         cnt=cnt/10;
                    }
                
                reverse(chars.begin()+start ,chars.begin()+index);}
                prev=chars[i];
                cnt=1;
            }
        }
        chars[index++]=prev;
        if( cnt>1){int start = index;
                    while(cnt){
                       
                        chars[index++]=cnt%10 +'0';
                         cnt=cnt/10;
                    }
                                reverse(chars.begin()+start ,chars.begin()+index);
        }
    return index;}
};