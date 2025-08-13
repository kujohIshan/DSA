class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int hash[n+1]={0};
        for(int i = 0; i< n; i++){
            int index = arr[i];
            hash[index]++;
        }
        int repeat = -1 ;
        int missing = -1;
        for(int i =1;i<n+1;i++){
            if(hash[i] == 0 )
            missing = i;
            else if(hash[i]== 2)
            repeat = i;
            if(repeat != -1 && missing != -1){
                break;
            }
        }
        return {repeat,missing};
    }
};