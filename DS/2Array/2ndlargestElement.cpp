/*
Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,6,7,7,5};
    int first= INT_MIN, sec= INT_MIN;
    int s= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        if(arr[i]> first){
            sec= first;
            first= arr[i];
        }
        else{
            if(arr[i]>sec && arr[i]!= first){
                sec= arr[i];
            }
        }
    }
    cout<<"second largest number is: "<<sec;
}