/*
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, d=3;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
        cin>>arr[i];
    
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]= arr[i];
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    for(int i=d; i<size; i++){
        arr[i-d]= arr[i];
        cout<<arr[i-d]<<" ";
    }
    cout<<endl;
    int j=0; 
    for(int i=size-d; i<size; i++){
        arr[i]= temp[j];
        j++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}