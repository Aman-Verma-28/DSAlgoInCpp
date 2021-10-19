#include<bits/stdc++.h>
using namespace std;
#include<queue>


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


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    rep(i,n){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
}
char helper(char left){
    switch(left){
        case ')':
            return '(';
        case '}':
            return '{';
        case ']':
            return '[';
    }   
}
bool balancedParanthesis(string brackets){
    stack<char> st;
    char temp;
    rep(i,brackets.size()){
        if(brackets[i]=='(' || brackets[i]=='{' || brackets[i]=='[')
            st.push(brackets[i]);
        else{
            if(st.empty())
                return false;
            if(st.top()!=helper(brackets[i])){
                return false;
            }
            st.pop();
        }
    }
    return st.size()==0;
}
int operate(int op1,int op2,char oper){
    switch(oper){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            return op1/op2;
        case '^':
            return pow(op1,op2);
    }
}
void evalPrefix(){
    string prefix;
    cin>>prefix;
    stack<int> st;
    int op1,op2;
    for(int i=prefix.size()-1;i>=0;i--){
        if(isdigit(prefix[i])){
            st.push(prefix[i]-'0');
        }
        else{
            op1=st.top();
            st.pop();
            op2=st.top();
            st.pop();
            st.push(operate(op1,op2,prefix[i]));

        }
    }
    cout<<st.top()<<endl;
    st.pop();
    
}
void evalPostfix(){
    string postfix;
    cin>>postfix;
    stack<int> st;
    int op1,op2;
    rep(i,postfix.size()){
        if(isdigit(postfix[i])){
            st.push(postfix[i]-'0');
        }
        else{
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(operate(op1,op2,postfix[i]));

        }
    }
    cout<<st.top()<<endl;
    st.pop();
}

vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k) {
    vector<long long> ans;
    ll i,j;
    i=0;j=0;
    deque<ll> l;
    while(j<n){
        while(j-i+1!=k){
            if(arr[j]<0)
                l.pb(arr[j]);
            j++;
        }
        if(arr[j]<0)
            l.pb(arr[j]);
        if(l.empty())
            ans.pb(0);
        else{
            ans.pb(l.front());
        }
        j++;
        if(l.front()==arr[i])
            l.pop_front();
        i++;
    }
    
    return ans;

                                                 
 }
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    int t;
    // solve();
    // evalPrefix();
    // evalPostfix();
    // string brackets;
    // cin>>brackets;
    // cout<<balancedParanthesis(brackets)<<endl;
    ll n;
    cin>>n;
    ll arr[n];
    rep(i,n){
        cin>>arr[i];
    }
    ll k;
    cin>>k;
    vector<ll> ans = printFirstNegativeInteger(arr,n,k);
    rep(i,ans.size())
        cout<<ans[i]<<endl;
    return 0;
}
