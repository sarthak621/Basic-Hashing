#include<iostream>
using namespace std;
int main(){ 
    //declaring the array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};   //creating a hash of size 13 with value 0 in it
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //now we know the hashing of all the no.s
    //now our task is to find how many times the following no.s come
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<<hash[number]<<endl;
    }
}