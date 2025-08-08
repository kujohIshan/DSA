class Solution {
  public:
    void swapgreater(vector<int>& a, vector<int>& b, int ind1, int ind2){
        if(a[ind1] > b[ind2]){
            swap(a[ind1] , b[ind2]);    
        }
    }
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        int len = (n+m);
        int gap = (n+m)/2 + (n+m)%2;
        while(gap > 0 ){
            int left = 0;
            int right = left + gap;
            while(right< len){
                // arr1 and arr2
                if(left < n && right >= n ){
                    swapgreater(a, b , left , right -n);
                }
                // arr 2 and arr 2
                else if(left >=n){
                    swapgreater(b, b , left-n , right -n);
                }
                // arr1 and arr1
                else{
                    swapgreater(a, a , left , right);
                }
                left ++;
                right ++ ;
            }
            if(gap == 1 ) break;
            gap = (gap/2) + (gap%2); 
        }
    }
};