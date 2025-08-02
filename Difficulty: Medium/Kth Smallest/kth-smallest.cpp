// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>max_heap;
        for(int i =0; i< arr.size();i++)
        {
            max_heap.push(arr[i]);
        }
        while(max_heap.size() > k){
            max_heap.pop();
        }
        return max_heap.top();
    }
};