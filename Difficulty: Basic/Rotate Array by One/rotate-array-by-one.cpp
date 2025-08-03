// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int i=0;
        int n = arr.size();
    while(i<n)
    {
        swap(arr[n-1],arr[i]);
        i++;
    }
    }
};