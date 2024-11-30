class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxsize= INT_MIN;
        int n= s.length();
        if(n==0){
            return 0;
        }
        // brute force generate all substrings
        
        // for(int i =0; i<n; i++){
        //     unordered_set<char> present;
        //     for(int j=i;j<n;j++){
        //         if(present.count(s[j])) // if the char is present break 
        //         break;
            
        //     // else insert 
        //     present.insert(s[j]);
        //     maxsize= max(maxsize, j-i+1);
        //     }
        // }
        // return maxsize;


        // optimal using 2 pointers
        int left =0;
        unordered_set<char> present;
        for(int right=0;right<n;right++){
            while(present.count(s[right])){ // if duplicate is present it will erase the first element and start from the next
                present.erase(s[left]);
                left++;
            }
            present.insert(s[right]);
            maxsize= max(maxsize , right -left +1);
        }
        return maxsize;
    }
    
};