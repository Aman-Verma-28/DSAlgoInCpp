#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define revRep(i,n) for(int i=n-1;i>=0;i--)
#define sort(v) sort(v.begin(),v.end())
#define pb(n) push_back(n)
#define pob(n) pop_back(n)
#define pf(n) push_front(n)
#define pof(n) pop_front(n)


void slidingWindow(){
    // Identify the sliding window as---> 
    // i) array diya ho aur uske subarray pe opertaion krna ho kuch 
    // ii) kuch maximum minimum niklana ho posibly subarray ka
    // iii) ek size diya ho jo ki window size ko represent kr rha ho   ---> fixed size array
    // iv) window size nikalne ko bhi diya ho skta hai ----> variable size array
    deque<int> dq;
    int n,temp,k;
    cin>>n>>k;
    rep(i,n){
        cin>>temp;
        dq.pb(temp);
    }
    if(k>n){
        cout<<-1<<endl;
        return;
    }
    int sum=0,ans=0;
    int i=0,j=0;
    while(j<n){
        while(j-i+1<k){
            sum+=dq[j];
            j++;
        }
        if(j-i+1==k){ // window size = k = j-i+1
            sum+=dq[j];
            ans=max(ans,sum);
            j++;
            sum-=dq[i];
            i++;
        }
    }
    cout<<ans<<endl;


}

int main(){
    // prefix sum query 
    // refrences in cpp are like when we pass the var as it is and then in function we use '&' in front of the passed var to use it as the refrence var
    // fun(a,b)    ----->   int fun(&a,&b)-----> this will act as the pass by refrence 
    // to pass 2d array we pass it as fun(a) in definition--> fun(a[][10])
    
    // int input;
    // cin>>input;
    // while(input!=42){
    //     cout<<input<<endl;
    //     cin>>input;

    // }
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    slidingWindow();
    return 0;
}

// Sir should I call? and one request sir can I call you over whatsapp itself? due to rain the mobile network in my area is very weak
void prefixSum(){
    deque<int> dq;
    int n,temp,k;
    cin>>n>>k;
    rep(i,n){
        cin>>temp;
        dq.pb(temp);
    }
    dq.pf(0);
    
    deque<int> l1;
    int sum=0;
    rep(i,dq.size()){
        sum+=dq[i];
        l1.pb(sum);
    }

    if(k>n){
        cout<<-1<<endl;
        return;
    }
    if(k==n){
        cout<<l1[n]<<endl;
        return;
    }
    int ans=0;
    for(int i=k;i<=n;i++){
        ans=max(ans,l1[i]-l1[i-k]);
    }
    cout<<ans<<endl;
}