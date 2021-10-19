#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[],int n,int key){
    int left=0;
    int right=n-1;
    int mid;
    while (left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key)
        return mid;
        if(arr[mid]>key)
        right=mid-1;
        else
        left=mid+1;
    }
    return -1;
}

void selectionSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min = i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j])
            min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void bubbleSort(int arr[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insertionSort(int arr[],int n){
    int i,j;
    for(int i=1;i<n;i++){
        j=i-1;
        int x=arr[i];
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=x;
    }
}

int fun(string s1, string s2){
    string temp="";
    int i=0,j=0;
    int k=s2.size();
    int ans=0;
    while(j<s1.size()){
        if(j-i+1!=k){
            temp+=s1[j];
            j++;
        }
        else{
        temp+=s1[j];
        if(temp==s2)
            ans++;
        j++;
        temp=temp.substr(1);
        i++;
        }   
    }
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    string s1,s2;
    cin>>s1>>s2;
    cout<<fun(s1,s2)<<endl;
    
    return 0;



}


