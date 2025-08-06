class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
         unordered_map<int, int>freq;
        vector<int> res;
        int n = arr.size();
        for(int i = 0 ; i< n; i++){
            freq[arr[i]]++;
        }
        for(auto iterate : freq){
            if(iterate.second > 1){
                res.push_back(iterate.first);
            }
        }
        return res;
        
    }
};