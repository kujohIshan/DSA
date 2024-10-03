class Solution {
public:
    void combi(int index , int target , vector<int>& arr, vector<vector<int>>& ans , vector<int>& ds){
       if(target == 0){
        ans.push_back(ds);
        return;
       }
    
        for(int i =index ; i< arr.size(); i++){
            if(arr[i] > target) // leave the rest of the loop
            break;
            if(i >index && arr[i] == arr [i-1])  // skip the duplicates
            continue;
            // pick up the element
            ds.push_back(arr[i]);
            combi(i + 1, target - arr[i],arr,ans,ds );
            // Backtrack to remove the last added element
            ds.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end()); // apply sorting
        combi(0, target,candidates, ans, ds);
        return ans;
    }
};