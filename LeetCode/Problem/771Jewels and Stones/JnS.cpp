class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num=0;
        for(int i=0; i<jewels.length(); i++){
            num= num + count(stones.begin(), stones.end(), jewels[i])
            // for(int j=0; j<stones.length(); j++){
            //     if(jewels[i]== stones[j]){
            //         num++;
            //     }
            // }
        }
        return num;
    }
};
