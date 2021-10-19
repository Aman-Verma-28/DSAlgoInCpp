#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i=l,j=m+1;
    int b[r+1];
    int k=l;
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            b[k++]=arr[i++];
        }
        else{
            b[k++]=arr[j++];
        }
    }
    while(i<=m){
        b[k++]=arr[i++];
    }
    while(j<=r){
        b[k++]=arr[j++];
    }
    int x = l;
    while(x<=r){
        arr[x]=b[x++];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m =(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int partition(int arr[], int l, int r){
    // select the first element as the pivot element and place it on to the correct position
    // you can also select the last element aas the pivot element also any random element as that will be called as the randomized quick sort algo
    int j=l+1;
    int k=r;
    int pivot=l;
    while(true){
        while(j<=r && arr[j]<=arr[pivot])
            j++;
        while(k>=0 && arr[k]>arr[pivot])
            k--;
        if(j<k){
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }
        else{
            int temp=arr[j];
            arr[j]=arr[pivot];
            arr[pivot]=temp;
            return j;
        }
    }

}


void quickSort(int arr[], int l, int r){
    if(l<r){
        int pivot = partition(arr,l,r);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,r);
    }
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<i<<" "<<arr[i]<<endl;
    
    return 0;
}