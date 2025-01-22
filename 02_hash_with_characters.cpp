#include<iostream>
using namespace std;
int main(){ 
    //declaring the array
    string s;
    cin>>s;
    
   

    //precompute
    int hash[26]={0};   //creating a hash of size 13 with value 0 in it
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }

    //now we know the hashing of all the no.s
    //now our task is to find how many times the following no.s come
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c-'a']<<endl;
    }
}