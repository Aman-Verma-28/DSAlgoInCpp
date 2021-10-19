#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    // n and n-1 has a pattern that in bitwise n-1 is just the compliment of n after the last set bit(including th last set bit)
    // we can use this to check whehter the given number is a power of 2 or not as n&n-1 will reesult in 0 as power of 2 will only have 1 set bit 
    

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int arr1[64]={0};
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int count=-1;
        while(temp){
            count++;
            if(temp&1!=0){
                
                arr1[count]+=1;
            }
            temp=temp>>1;
        }
    }
    int ans=0;
    for(int i=0;i<64;i++){
        if(arr1[i]%3!=0){
            ans+=pow(2,i);
        }
    }
    cout<<ans<<endl;
    // cout<<gcd(5,20)<<endl;
    return 0;
}