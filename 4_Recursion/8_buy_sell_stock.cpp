// leetcode // 121
// we have to find the min elemt in left then sub from rest of the arry to fine the axx
// elemenet 


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
    int profit=0;
    int buy=prices[0];

    for( int i=1;i<prices.size();i++){
        
            
            buy = min(buy, prices[i]);
            profit = max(profit, prices[i]-buy);
    }      
    return profit;
    }
};


// recusinv approch 


/*
class Solution {
public:

int sel( vector<int>& arr, int i,int buy,int &profit ){
    if( i== arr.size()){
        return profit;
    }
    
     
      buy =  min(buy,arr[i]);
        profit = max(profit,arr[i]-buy);
    
    return sel(arr,i+1,buy,profit);
}
    int maxProfit(vector<int>& prices) 
    {
            int profit=0;
        return sel(prices,0,prices[0],profit);

        
    }
*/