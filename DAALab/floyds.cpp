#include<bits/stdc++.h>
using namespace std;
int D[100][100];

void floyds(int nodes){
    
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            for(int k=0;k<nodes;k++){
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
            }
        }
    }
}

void solve(){
    int a,b,n;
    cin>>n>>a>>b;
    
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    int t;
    // t=1;
    cin>>t;
    while(t--)
        solve();
    

    return 0;
}