/*
Input: nums = [0, 0, 3, 3, 5, 6]

Output: 4

Explanation: Resulting array = [0, 3, 5, 6, _, _]

There are 4 distinct elements in nums and the elements marked as _ can have any value.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int k=0;
    for(int i=1; i<size; i++){
        if(arr[k] != arr[i]){
            k++;
            arr[k]= arr[i];
        }
    }
    cout<<k+1<<endl;
    for(int i=0; i<=k; i++){
        cout<<arr[i]<<" ";
    }
}