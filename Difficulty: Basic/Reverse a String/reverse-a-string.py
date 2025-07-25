#User function Template for python3

class Solution:
     def reverseString(self, s: str) -> str:
        # code here
        n=len(s)
        reversed_string=""
        for char in range(n-1,-1,-1):
            reversed_string+= s[char]
        return reversed_string