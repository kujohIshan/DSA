class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
       if (n <= 1) return 0;               // Already at the end
       if (arr[0] == 0) return -1; 
        int jumps = 0;
        int initial = 0, range =0;
        while(range <n-1){
            int farthest = 0;
            for(int i= initial; i<=range; i++)
            {
                farthest = max(i+arr[i], farthest);
            }
            if (farthest <= range) return -1; // stuck, can't proceed
            initial = range +1;
            range = farthest;
            jumps++;
        }
        return jumps;
    }
};
