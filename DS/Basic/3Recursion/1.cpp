/*
1. Understand recursion by print something N times
*/

#include<iostream>
using namespace std;
int fun(int );
int main(){
    int num=0;
    fun(num);
}
int fun(int num){
    cout<<"hello \n";
    num++;
    if(num<10){
        fun(num);
    }
    return 0;
}