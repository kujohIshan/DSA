class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<= 1) return 0;
        if(nums[0]== 0) return -1;
        int jumps =0, initial = 0, range =0;
        while(range < n-1){
            int farthest = 0;
            for(int i = initial ; i<= range ; i++){
                farthest = max(i+nums[i],farthest );
            }
            if(farthest <= range ) return -1;
            initial = range +1;
            range = farthest;
            jumps++;
        }
        return jumps;
    }
};