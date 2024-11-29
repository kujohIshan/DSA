class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size();
        int max = arr[n-1];
    
        for(int i=n-2;i>=0;i--){
            if(arr[i] > max){
                max= arr[i];
            }
            else{
                arr[i] =max;
            }
        }
        for(int i=0;i<n-1;i++){
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
        }
        arr[n-1]=-1;
        return arr;
    }
};