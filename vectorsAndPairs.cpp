#include "bits/stdc++.h"
#include<vector>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.pop_back();

    //traversal 
    for(int i=0;i<v.size();i++){  // for i in range(len(v))
        cout<<v[i]<<endl;
    } 

    for(auto i:v){  // for i in v
        cout<<i<<endl;
    }

    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    vector<int> v1(3,2); // it will intialize the vector with 3 elemnts having value 2 
    // l = [2]*3 


    pair<int, int> p;
    int fir = p.first; // to access the first element of pair p 
    int sec = p.second; // to access the second element of pair p
    p={1,2};
    // we can also use make_pair for the given values to make a pair
    p=make_pair(1,2);


    return 0;
}