class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0) return false;
         long sum = 0; 
         int temp = x;
         while(temp != 0){
           int last = temp % 10;
            sum = sum * 10 + last;
            temp/=10;
         }
         return sum == x;

      
    }
};