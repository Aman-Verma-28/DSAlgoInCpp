#include<bits/stdc++.h>
using namespace std;

int n,W,w[10],v[10],V[10][10],x[10];
void knapsack(){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++){
            if(i==0||j==0)
                V[i][j]=0;
            else if(j<w[i])
                V[i][j]=V[i-1][j];
            else
                V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
            cout<<V[i][j]<<"    ";

        }
        cout<<endl;
    }
}
void printsol(){
    int i,j;
    i=n;
    j=W;
    while(i!=0 && j!=0){
        if(V[i][j]!=V[i-1][j]){
            x[i]=1;
            j=j-w[i];
        }
        i--;
    }

}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int i;
    cin>>n>>W;
    for(i=1;i<=n;i++)
        cin>>w[i];
    for(i=1;i<=n;i++)
        cin>>v[i];
    knapsack();
    printsol();
    for(i=1;i<=n;i++){
        if(x[i]==1)
            cout<<i<<"    "<<w[i]<<"    "<<v[i]<<endl;
    }
    
    
    cout<<"Max profit is: "<<V[n][W]<<endl;


    return 0;
}
