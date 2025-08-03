class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> neg ;
        int n = arr.size();
        neg.reserve(n);
        for(int i= 0;i<n;i++){
            if(arr[i] >=0){
                neg.push_back(arr[i]);
            }
           
        }
        for(int i= 0;i<n;i++){
            if(arr[i] <0){
                neg.push_back(arr[i]);
            }
           
        }
       
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = neg[i];
        }
    }
};