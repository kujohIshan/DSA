class Solution {
public:
    int func(vector<int>& nums, int goal){
        if(goal< 0){
            return 0;
        }
        int left =0 ,right =0, sum=0,count=0;
        int n =nums.size();
        while(right< n){
            sum= sum+nums[right];
            while(sum >goal){
                sum -= nums[left];
                left =left +1;
            }
            count = count +(right - left +1);
            right = right +1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n =nums.size();
        int count=0;

        // brute force

        // for(int i=0;i<n;i++){
        //     int sum =0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==goal){
        //             count++;
        //         }
        //         else if(sum > goal){
        //             break;
        //         }
        //     }
        // }
        // return count;

        // optimal 
        
        return func(nums, goal) - func(nums, goal -1);
    }
};