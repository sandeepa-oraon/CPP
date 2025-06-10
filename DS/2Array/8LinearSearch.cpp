/*
Input: nums = [2, 3, 4, 5, 3], target = 3
Output: 1
Explanation: The first occurence of 3 in nums is at index 1

Input: nums = [2, -4, 4, 0, 10], target = 6
Output: -1
Explanation: The value 6 does not occur in the array, hence output is -1
*/

#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int, vector<int> arr);
int main(){
    int n=6, target= 1;
    vector<int> arr= {2, 3, 4, 5, 3, 4};
    int ans= LinearSearch(target, arr);
    cout<<ans;
}

int LinearSearch(int target, vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}