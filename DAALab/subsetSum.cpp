#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define revRep(i,n) for(int i=n-1;i>=0;i--)
#define sortArr(v,n) sort(v,v+n)
// #define sort(v) sort(v.begin(),v.end())
#define pb(n) push_back(n)
#define pob(n) pop_back(n)
#define pf(n) push_front(n)
#define pof(n) pop_front(n)

int d,w[10],x[10];

void subsetSum(int s,int k,int r){
    static int b=1;
    x[k]=1;
    if(s+w[k]==d){
        cout<<"Subset is: "<<b++<<endl;
        rep1(i,k){
            if(x[i]==1)
                cout<<w[i]<<endl;
        }
    }
    else if(s+w[k]+w[k+1]<=d)
        subsetSum(s+w[k],k+1,r-w[k]);
    if((s+r-w[k]>=d) && (s+w[k+1]<=d))
        subsetSum(s,k+1,r-w[k]);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int n,i,sum=0;
    // cout<<"Enter number of elements"<<endl;
    cin>>n;
    rep1(i,n){
        cin>>w[i];
        sum+=w[i];
    }
    sortArr(w,n);
    // rep1(i,n){
    //     cout<<w[i]<<endl;
    // }
    cin>>d;
    if(sum<d || w[1]>d){
        cout<<"No solution"<<endl;
        return 0;
    }
    
    subsetSum(0,1,sum);
    return 0;
}