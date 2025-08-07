class Solution {
    boolean isPalindrome(String s) {
        // code here
        int n = s.length()-1;
         StringBuilder rev = new StringBuilder();
        for(int i = n;i>=0 ;i--){
           rev.append(s.charAt(i)); 
        }
        if(s.equals(rev.toString())){
            return true;
        }
        else{
            return false;
        }
    }
}