
class Solution {
public:
    bool isPalindrome(int x) {
        int mod, num;
        double rev=0;
        num=x;
        if(x<0)
            return false;
        while(num != 0){
            rev= (rev * 10) + num%10;
            num= num/10;
        }
        if(x == rev ){
            return true;
        }
        else{
            return false;
        }
    }
};
