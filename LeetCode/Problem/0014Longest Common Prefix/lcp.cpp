class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix= strs[0];
        for(int i=1; i< (int)strs.size(); i++){
            int j=0;
            while(prefix[j] == strs[i][j] && j<(int)prefix.size() && j< (int)strs[i].size())
                j++;
            prefix= prefix.substr(0, j);
            if(prefix== "") return "";
        }
        return prefix;
    }
};
