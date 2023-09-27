#include<bits/stdc++.h>
using namespace std;

int* exchange(int n , int arr[]){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){

            //如果比較大則交換
            if(arr[j]<arr[i]){

                //交換
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // 回到交換起點
                j = i;
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

    //執行exchange sort
    p = exchange(n,a);
    timer = clock();

    cout<<"Spend time "<<timer<<" ms";
}