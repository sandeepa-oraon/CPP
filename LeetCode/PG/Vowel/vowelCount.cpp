int main() {
    // string chr= "Aello World";
    string chr;
    int count=0;
    cout<<"Enter string: ";
    getline(cin, chr);
    cout<<"Consonents are: \n";
    for(int i=0; i<chr.length(); i++){
        char ch= tolower(chr[i]);
        if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
        else{
            cout<<chr[i]<<" ";
        }
    }
    cout<<"\nNumber of Vowels: "<<count;
    
}
