class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> res;
        int n = a.size();
        int m = b.size();
        for(int i = 0 ; i<n ; i++){
            res.insert(a[i]);
        }
        for(int i = 0 ; i<m ; i++){
            res.insert(b[i]);
        }
        vector<int>v(res.begin(),res.end());
        return v;
    }
};