/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0; i<5; i++){
        for(char j='A'; j<'A'+(n-i); j++)
            cout<<j<<" ";
    cout<<endl;
    }
}