// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = arr.size();
        int max= INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i<n ;i++){
            if(arr[i] >= max){
                max =arr[i];
            }
            if(arr[i]<= min){
                min= arr[i];
            }
            
        }
        return {min, max};
    }
};