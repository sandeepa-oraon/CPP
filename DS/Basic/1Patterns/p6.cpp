/*
    1 2 3 4 5 
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/

#include<iostream>

using namespace std;
int main(){
    // for(int i=5; i>0; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }
    int n=5;
    for(int i=0; i<5; i++){
        for(int j=0; j< (n-i); j++){
            cout<< j+1<<" ";
        }
        cout<<endl;
    }
}