class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi =0;
        int n= nums.size();
        // brute force

        // for(int i=0;i<n;i++){
        //     int flip= 0;
        //     for(int j = i; j<n;j++){
        //         if(nums[j]== 0){
        //             flip++;
        //         }
        //         if(flip > k)
        //         break;
        //         maxi = max(maxi, j-i+1) ;
        //     }
        // }
        // return maxi;

        // optimal
        int left =0 ,right=0;
        int zerocount=0;
        while(right< n){
            if(nums[right] == 0){
                zerocount ++;
            }
            while(zerocount > k){
                if(nums[left]==0){
                    zerocount--;
                }
                left ++;
            }
            maxi = max(maxi ,right - left +1);
            right++;
        }
        return maxi;
    }
};