#include<bits/stdc++.h>
using namespace std;

int* merge(int start ,int end,int arr[]){

    if(end>start){
        int index = (start+end)/2; //找出中點，切割陣列
        merge(start,index,arr);
        merge(index+1,end,arr);
    }
    cout<<arr[start]<<" / ";
    return 0;
}

int main(){
    int n,a[1000];
    int *p = a;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //印出輸入內容
    cout<<"input:"<<endl;
    cout<<"| ";
    for(int k=0;k<n;k++){
        cout<<a[k]<<" | ";
    }
    cout<<endl;


    //執行merge sort
    p = merge(0,n-1,a);

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}