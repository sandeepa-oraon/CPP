class Solution {
public:
    int char2nums(char a){
        switch(a){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int result=0;
        for(int i=0; i<s.length(); i++){
            if(i+1< s.length() && char2nums(s[i])< char2nums(s[i+1])){
                result -= char2nums(s[i]);
            }else{
                result += char2nums(s[i]);
            }
        } 
        return result;
    }
};
