class Solution {
public:
    int maxDepth(string s) {
         int n = s.length();
         int count = 0;
         int maximum = 0;

         
         for (char c : s) {
            if (c == '(') {
                count++;
                maximum = max(maximum, count);
            } else if (c == ')') {
                count--;
            }
            
           
         
         }
            return maximum;
    }
};