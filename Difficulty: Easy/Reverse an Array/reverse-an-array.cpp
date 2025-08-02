class Solution {
  public:
    void reverseArray(vector<int> &arr) {

        int n = arr.size();
        vector<int> rev;
        for(int i =0 ; i< n; i++)
        {
            rev.push_back(arr[n-1-i]);
        }
       arr = rev;
    }
};