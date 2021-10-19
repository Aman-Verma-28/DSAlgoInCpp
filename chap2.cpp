#include<bits/stdc++.h>
// #include<iostream>
// #include<cmath>
//Video 16,25
using namespace std;
// >> is the extraction operator
// << is the insertion operator
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    #endif // !ONLINE_JUDGE
    int n;
    cin>>n;
    int temp = n;
    int res = 0;
    while(n>0){
        int last = n%10;
        n = n/10;
        res+=pow(last,3);
    }
    if(res==temp)
        cout<<"Armstrong number"<<endl;
    else
        cout<<"NOT"<<endl;
    return 0;
}
