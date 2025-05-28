#include<iostream>
int main() {
    int size, res=0;
    int ar1[]={2, 5, 3, 3, 2,9, 5};
    size= sizeof(ar1)/sizeof(ar1[0]);
    for(int i=0; i<size; i++){
        res ^= ar1[i];
    }
    cout<<res;
}
