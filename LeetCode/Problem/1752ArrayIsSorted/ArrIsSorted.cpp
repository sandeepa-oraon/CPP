class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int count= 0;
        //check if array is sorted in increasing and is rotated
        for(int i=0; i<n; i++){
            if(nums[i]> nums[(i+1)%n])
                count++;
        }
        
        
        return count<=1;
    }
};
