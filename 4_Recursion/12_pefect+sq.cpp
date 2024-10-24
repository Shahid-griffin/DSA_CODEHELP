class Solution {
public:

    int rec(int n){
        if( n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }

        int ans=INT_MAX;
        int ele = 1;
        int end = sqrt(n);

        while( ele<=end){
            int perfectno= ele*ele;
           int  ans1= min(ans ,1+rec(n-perfectno));
           ans=min (ans1,ans);
           ++ele;
        }
        return ans; 

    }

    int numSquares(int n) {
        return rec(n)-1;
        
    }
};