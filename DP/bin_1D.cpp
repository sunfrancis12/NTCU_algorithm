#include<bits/stdc++.h>
using namespace std;

vector<int> arr;

int bin(int n,int k){

    for(int i=0;i<=n*k;i++){
        if(i==0 || i==1){
            arr.push_back(1);
        }else{
            arr.push_back(arr[i-1] + arr[i-2]);
        }
        
    }
    
    return arr[n*k];
}

int main(){
    int n,k,ans;
    cout<<"input C(n,k)"<<endl;
    cin>>n>>k;

    cout<<bin(n,k)<<endl;
    
    for(int i=0;i<=n*k;i++){
        cout<<" | "<<arr[i];
    }
    cout<<" | ";
}