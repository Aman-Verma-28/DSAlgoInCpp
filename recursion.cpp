#include<bits/stdc++.h>
using namespace std;

string list[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};

void combinations(int num1, int num2){
    //pass
}

void printAc(int n){
    if(n==0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printAc(n-1);
    
}

int firstOcurence(int arr[], int n, int i, int key){
    if(i==n)
        return -1;
    if(arr[i]==key)
        return i;
    return firstOcurence(arr,n,i+1,key);
}

int lastOcurence(int arr[], int n, int i, int key){
    if(i==-1)
        return -1;
    if(arr[i]==key)
        return i;
    return lastOcurence(arr,n,i-1,key);
}

void reverse(string s){
    if(s.size()==1){
        cout<<s[0];
        return;
    }
    reverse(s.substr(1));
    cout<<s[0];
}

void replace(string s){
    if(s.size()==0)
        return;
    if(s.substr(0,2)=="pi"){
        cout<<3.14;
        replace(s.substr(2));
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }
}

string removeDup(string s){  // Works only when duplicates are present together
    if(s.size()==0){
        return "";
    }
    char cur = s[0];
    string ros = removeDup(s.substr(1));
    if(ros[0]==cur)
        return ros;
    return cur+ros;
}

string moveX(string s){
    if(s.size()==0)
        return "";
    char ch = s[0];
    if(ch=='x'){
        string ans = moveX(s.substr(1));
        return ans+ch;
    }
    else{
        string ans =  moveX(s.substr(1));
        return ch+ans;
    }
}
int subsequnce(string s, string output[]){
    if(s.size()==0){
        output[0]=" ";
        return 1;
    }
    char ch=s[0];
    int small = subsequnce(s.substr(1),output);
    for(int i=0;i<small;i++){
        output[i+small]=ch+output[i];
    }
    return 2*small;
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    string arr;
    cin>>arr;
    string output[100];
    int size = subsequnce(arr,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}