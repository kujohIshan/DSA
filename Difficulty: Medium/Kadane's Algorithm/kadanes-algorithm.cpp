class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int res = arr[0];
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum += arr[i];
            res = max(res , sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return res;
    }
};