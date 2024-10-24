// leetcode198
/*basically ye fibo type ka  question hai isme ham  2 possible sol mante hai 
ya to ans1 or ans2 abhi te optimise nhi hai lekin DP se hoga*/

/*approch ye haiki wali sare possble sol dehkhte Diagrma copy me hai
sort of inclusion a d exclusion */

class Solution {
public:

    int rec(vector<int> &nums, int i){
        if( i>=nums.size()){
            return 0;
        }

        int ans1= nums[i]+ rec(nums,i+2);
        int ans2= 0+ rec(nums, i+1);

        return ans1>ans2? ans1:ans2;
    }
    int rob(vector<int>& nums) {
        int i=0;
        return rec(nums,i);
        
    }
};