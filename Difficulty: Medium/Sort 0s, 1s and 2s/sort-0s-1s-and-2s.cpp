class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int low =0,high=n-1,mid= 0;
        while(low<= mid && mid <=high)
        {
            if(arr[mid]== 0){
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid], arr[high]);
                high--;
            }
            else if(arr[mid] == 1){
                mid ++;
            }
            
        }
    }
};