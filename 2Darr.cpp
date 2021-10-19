#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    #endif // !ONLINE_JUDGE

    char arr[100],ans[100];
    int n;
    cin>>n;
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int len=0;
    int i=0;
    int cur=0;
    int k=0,m=0;
    while(arr[i]!='\0'){
        if(int(arr[i])==32){
            if(cur>len){
                len=cur;
                k=m;
                // cout<<k++<<len<<endl;
            }
            // cout<<cur<<endl;
            cur=0;
            m=i+1;
        }
        else
            cur++;
            // cout<<cur<<"  --  "<<k++<<endl;
        i++;
    }
    if(cur>len)
        {
            len=cur;
            k=m;
        }
    cout<<len<<" "<<k<<endl;
    for(int i=k;i<k+len;i++){
        cout<<arr[i];
    }

}