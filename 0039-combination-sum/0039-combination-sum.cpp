class Solution {
public:
    void combi(int index, int target, vector<int> &arr, vector < vector < int >> & ans, vector<int>& ds ){
        int n =arr.size();
        if(index == n){
            if(target == 0){
                ans.push_back(ds);
            }
            return ;
        }
        // pickup element
        if(arr[index] <=target){
            ds.push_back(arr[index]);
            combi(index, target -arr[index], arr, ans, ds);
            // pop the elements from ds
            ds.pop_back();
        }
        // not picking up
        combi(index+1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> ds;
        combi(0, target, candidates, ans, ds);
        return ans;
    }
};