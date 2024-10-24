class Solution {
public:
    int rec(vector<int>& days, vector<int>& costs ,int i){
        if( i>=days.size())
        return 0;

         int cost1= costs[0] + rec(days,costs,i+1);
         int end = days[i]+7-1;
         int j=i;
         while(j<days.size() && days[j] <= end){
            j++;
         }
        int cost2= costs[1] + rec(days,costs,j);
        end = days[i]+30-1;
         j=i;
         while(j<days.size() && days[j] <= end){
            j++;
         }
           int cost3= costs[2] + rec(days,costs,j);  
           return min(cost1,min(cost2,cost3));

    }

   
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return rec(days,costs,0);
        
    }
};