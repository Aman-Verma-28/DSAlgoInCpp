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
class Student{
    // by default these vars are private 
    int age;
    string name;
   
    public: // now methods and attributes below it will be public 
    string college;
    
    protected:
    bool gender;
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    deque<int> l;
    cout<<l.front()<<endl;


    return 0;
}

