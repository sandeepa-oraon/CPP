/*
Example:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 2,3,4,5,1
Explanation: 
Since all the elements in array will be shifted 
toward left by one so ‘2’ will now become the 
first index and and ‘1’ which was present at 
first index will be shifted at last.
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
    int temp= arr[0];
    for(int i=1; i<size; i++){
        arr[i-1]= arr[i];
    }
    arr[size-1]= temp;
    for(int i=0; i<size; i++){
        cout<< arr[i];
    }
    return 0; 
    
}