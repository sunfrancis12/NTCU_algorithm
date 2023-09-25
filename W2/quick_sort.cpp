#include<bits/stdc++.h>
using namespace std;

int* quick(int n,int arr[]){
    int temp,qviot=n; //支點

    int big=n,sml=qviot+1; //大小指標

    for(int i=0;i<n;i++){
        
    }
    
}
int main(){
    int n,a[100];
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


    //執行quick sort
    p = quick(n,a);

    cout<<"sort:"<<endl;

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }

}