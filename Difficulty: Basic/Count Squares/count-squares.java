// User function Template for Java

class Solution {
    static int countSquares(int n) {
        // code here
        int count =0;
        int i = 1;
        while(Math.pow(i,2) < n ){
            count ++;
            i++;
        }
        return count;
    }
}