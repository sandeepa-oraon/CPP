/*
        A         
      A B A       
    A B C B A     
  A B C D C B A   
A B C D E D C B A 
*/
#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i- 1); j++){
            cout<<"  ";
        }
        char ch= 'A';
        int breakpoint= (2*i+1)/2; 
        for(int j= 0; j<2*i+1; j++){
            cout<<ch<<" ";
            if(j<breakpoint)
                ch++;
            else
                ch--;
        }
        for(int j=0; j<(n-i- 1); j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}