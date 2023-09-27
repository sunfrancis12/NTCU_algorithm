#include<bits/stdc++.h>
using namespace std;

int* insertion(int n , int arr[]){
    //min為最小值的位置
    int min,temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){

                //交換
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }           
        }
    }

    return arr;
}

int main(){
    int n=100000,a[100000];
    int *p = a;
    clock_t timer;

    srand(time(NULL));

    for(int i=0;i<n;i++){
        a[i] = rand()%100000+1;
    }

    //執行insertion sort
    p = insertion(n,a);
    timer = clock();

    cout<<"Spend time "<<timer<<" ms";
}