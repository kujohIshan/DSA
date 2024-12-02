class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi =0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int flip= 0;
            for(int j = i; j<n;j++){
                if(nums[j]== 0){
                    flip++;
                }
                if(flip > k)
                break;
                maxi = max(maxi, j-i+1) ;
            }
        }
        return maxi;
    }
};