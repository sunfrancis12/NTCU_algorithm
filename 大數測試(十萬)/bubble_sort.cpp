#include<bits/stdc++.h>
using namespace std;

int* bubble(int n,int arr[]){

    for(int i=0;i<n-1;i++){
        int temp = 0;
        for(int j=1;j<n;j++){

            //交換
            if(arr[j-1]>arr[j]){

                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;

            }
        }
        if(temp ==0) return arr;
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

    //執行bubble sort
    p = bubble(n,a);
    timer = clock();

    cout<<"Spend time "<<timer<<" ms";

}