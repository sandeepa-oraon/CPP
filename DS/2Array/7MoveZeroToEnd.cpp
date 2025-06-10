/*
Example 1:
Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input: 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZero(int, vector<int> );
int main(){
    vector<int> arr= {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n=10;
    vector<int> ans=  moveZero(n, arr);

    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}

vector<int> moveZero(int n, vector<int> arr){
    vector<int> temp;
    int count1=0;
    temp.resize(n);
    //store all non-zero in an array
    for(int i=0; i<n; i++){
        if (arr[i] != 0){
            temp[count1]= arr[i];
            count1++;
        }
    }
    //fill 0 in rest places 
    for(int i=count1+1; i<n; i++){
        temp[i]= 0;
    }
    // for(int i=0; i<n; i++){
    //         cout<<temp[i]<<" ";
    // }
    return temp;
}