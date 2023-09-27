#include<bits/stdc++.h>
using namespace std;

int* selecetion(int n , int arr[]){
    //min為最小值的位置
    int min,temp;
    for(int i=0;i<n-1;i++){

        min = i; //重設min

        for(int j=i;j<n;j++){
            //找出最小值，並記錄其陣列中的位置
            if(arr[j]<arr[min]){
                min = j;
            }           
        }

        //交換
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    //執行selection sort
    p = selecetion(n,a);
    timer = clock();

    cout<<"Spend time "<<timer<<" ms";
}