class Solution {
    public String reverse(String S) {
        // code here
        Stack<Character> stack = new Stack<>();
        int n = S.length();
        for(int i = 0; i<n;i++){
            stack.push(S.charAt(i));
        }
        StringBuilder str = new StringBuilder();
        while(!stack.isEmpty()){
            str.append(stack.pop());
        }
        return str.toString();
    }
}