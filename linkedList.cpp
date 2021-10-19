#include<bits/stdc++.h>
using namespace std;

// class node{
//     public:
//         int data;
//         node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// node* insertEnd(node* head, int val){
//     node* temp = new node(val);
//     node* temp2= head;
//     if(head==NULL){
//         return temp;
//     }
//     while(temp2->next!=NULL){
//         temp2=temp2->next;
//     }
//     temp2->next=temp;
//     return head;

// }

#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define revRep(i,n) for(int i=n-1;i>=0;i--)
#define sort(v) sort(v.begin(),v.end())
#define reverse(v) reverse(v.begin(),v.end())
#define pb(n) push_back(n)
#define pob() pop_back()
#define pf(n) push_front(n)
#define pof() pop_front()
const ll N=1e6+5;
const ll mod=1e9+7;
 

void solve(){
    
}
vector<int> fun(const vector<int> &arr, int k){
	deque<int> l;
	int i=0,j=0;
	vector<int> ans;
	while(j<arr.size()){
		while(j-i+1!=k){
			while(l.size()>0 && arr[j]>l.back()){
				l.pob();
			}
			l.pb(arr[j]);
			j++;
		}
		while(l.size()>0 && arr[j]>l.back()){
				l.pob();
			}
			l.pb(arr[j]);
			ans.pb(l.front());
			if(arr[i]==l.front())
			l.pof();
			i++;
			j++;
	}
		return ans;
}
	

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    int t;
    t=1;
    // cin>>t;
	while(t--)
		solve();
    return 0;
}