#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int v,c;
        int dp[n+1][101];

        for(int i=0;i<=101;i++){
            dp[0][i] =0;
        }

        for(int i=1;i<=n;i++){
            cin>>v>>c;
            for(int j=0;j<=100;j++){
                if(j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(j<v) dp[i][j] = dp[i-1][j];
                else dp[i][j] = max(dp[i-1][j],dp[i-1][j-v] + c);

            }
        }
        cout<<dp[n][100]<<endl;
    }

}