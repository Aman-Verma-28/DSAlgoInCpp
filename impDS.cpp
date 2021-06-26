#include<bits/stdc++.h>
#include<stack>  // for stack STL is there
using namespace std;
#include<deque> // for deque STL is there

#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define revRep(i,n) for(int i=n-1;i>=0;i--)
#define sort(v) sort(v.begin(),v.end())
#define pb(n) push_back(n)
#define pob(n) pop_back(n)
#define pf(n) push_front(n)
#define pof(n) pop_front(n)

void insertBottom(stack<int> &st, int top){
    if(st.size()==0){
        st.push(top);
        return;
    }
        
    int t = st.top();
    st.pop();
    insertBottom(st,top);
    st.push(t);


    
}

void reverse(stack<int> &st){
    if(st.size()==1)
        return;
    int top =st.top();
    st.pop();
    reverse(st);
    insertBottom(st,top);

    
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    // stack<int> s;
    // s.push(5);
    // int top=s.top();// it will give the topmost element of the stack
    // string s;
    // getline(cin,s);
    // stack<string> st;
    // for(int i=0;i<s.size();i++){
    //     string word="";
    //     while(i<s.size()&&s[i]!=' '){
    //         word+=s[i];
    //         i++;
    //     }
    //     st.push(word);
    // }

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    stack<int> st;
    int n;
    cin>>n;
    rep(i,n){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    queue<int> qu;
    qu.front();
    return 0;
}