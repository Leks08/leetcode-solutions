class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        long sum=0;
        while(x>sum){

            long digit = x%10;
            sum=sum*10+digit;
            x=x/10;
        }
        if (x == sum || x == sum/ 10) {
            return true;
        }
        return false;
    }   
};