/*Example 1:
Input:
n = 5,m = 5.
arr1[] = {1,2,3,4,5}  
arr2[] = {2,3,4,4,5}
Output:
 {1,2,3,4,5}

Explanation: 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5} 

Example 2:
Input:
n = 10,m = 7.
arr1[] = {1,2,3,4,5,6,7,8,9,10}
arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12} */

#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m ){
    map<int, int> freq;
    vector<int> Union;
    for(int i=0; i< n; i++){
        freq[arr1[i]]++;
    }
    for(int i=0; i< m; i++){
        freq[arr2[i]]++;
    }
    for (auto &it : freq) {
        Union.push_back(it.first);
    }
    return Union;
}
int main(){
    int n=10, m=7;
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};
    vector<int> Union= FindUnion(arr1, arr2, n, m);
    cout<<"Union is: ";
    for(int i=0; i<Union.size(); i++){
        cout<<Union[i]<<" ";
    }
    return 0;
}
