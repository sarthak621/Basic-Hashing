#include<iostream>
#include<map>
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
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }

    //now we know the hashing of all the no.s
    //now our task is to find how many times the following no.s come
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<<mpp[number]<<endl;
    }
}