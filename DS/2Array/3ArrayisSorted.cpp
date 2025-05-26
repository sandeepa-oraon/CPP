/*
Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.
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
    bool isSorted=true;
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            isSorted= false;
            break;
        }
    }
    if(isSorted)
        cout<<"True\n";
    else{cout<<"False\n";}
    return 0;
}