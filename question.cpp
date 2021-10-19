#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    return p1.first<=p2.first;
}

int merge(int arr[], int l, int m, int r){
    int inversion=0;
    int i=l,j=m+1,k=l;
    int b[r+1];
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            b[k++]=arr[i++];
        }
        else{
            inversion+=(m-i+1);
            b[k++]=arr[j++];
        }
    }
    while(i<=m)
        b[k++]=arr[i++];
    while(j<=r)
        b[k++]=arr[j++];
    for(int i=l;i<=r;i++)
        arr[i]=b[i];
    return inversion;
}

int mergeSort(int arr[], int l, int r){
    int inversion=0;
    if(l<r){
        int mid=(l+r)/2;
        inversion+=mergeSort(arr, l , mid);
        inversion+=mergeSort(arr, mid+1, r);
        inversion+=merge(arr, l, mid, r);
    }
    return inversion;

}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Inversions are: "<<mergeSort(arr,0,n-1)<<endl;
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}