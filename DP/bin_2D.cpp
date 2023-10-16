#include<bits/stdc++.h>
using namespace std;

int arr[100][100];

int bin(int n,int k){

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i && j<=k;j++){
            if(i==0 || i==j){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    
    return arr[n][k];
}

int main(){
    int n,k,ans;
    cout<<"input C(n,k)"<<endl;
    cin>>n>>k;

    cout<<bin(n,k)<<endl;
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            cout<<"| "<<arr[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
}