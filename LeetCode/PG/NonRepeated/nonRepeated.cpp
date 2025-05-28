#include<iostream>
int main() {
    int size;
    int ar1[]={2, 5, 3, 3, 2};
    size= sizeof(ar1)/sizeof(ar1[0]);
    for(int i=0; i<size; i++){
        int isUnique= true;
        for(int j=0; j<size; j++ ){
            if(i != j && ar1[i] == ar1[j]){
                isUnique= false;
                break;
            }
        }
        if(isUnique)
            cout<<ar1[i]<<" ";
    }
}
