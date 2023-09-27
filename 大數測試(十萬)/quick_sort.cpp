#include<bits/stdc++.h>
using namespace std;


int* quick(int start,int end,int arr[]){

    if(start >= end){
        return 0;
    }

    int temp;
    int qviot = rand()%(end-start)+start; //隨機支點，避免worstcase
    int big = start; //紀錄比支點大陣列中的位置
    int sml = end-1; //紀錄比支點小陣列中的位置

    while(sml!=big){
        while(arr[sml]>=arr[qviot] && sml>big) //如果比支點大，則繼續尋找
            sml--;
        while(arr[big]<=arr[qviot] && sml>big) //如果比支點小，則繼續尋找
            big++;
        if(arr[big]>arr[qviot] && arr[sml]<arr[qviot] && big < sml){ //如果找到以上兩個點，則互相交換
            temp = arr[big];
            arr[big] = arr[sml];
            arr[sml] = temp;
        }
    }

    //互換交點與支點位置
    temp = arr[qviot];
    arr[qviot] = arr[big];
    arr[big] = temp;

    qviot = big; //支點位置改變 

    quick(start ,qviot,arr);
    quick(qviot + 1,end,arr);

    return arr;
}
int main(){
    int n=100000,a[100000];
    int *p = a;
    clock_t timer;

    srand(time(NULL)); //初始化隨機數產生器

    for(int i=0;i<n;i++){
        a[i] = rand()%100000+1;
    }

    //執行quick sort
    p = quick(0,n,a);
    timer = clock();

    cout<<"Spend time: "<<timer<<" ms";
}