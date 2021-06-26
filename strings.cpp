#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    
    string str(5,'a'); // str has string of length 5 and all chars as 'a'
    cout<<str<<endl;
    string s1;
    getline(cin,s1); // to get entire line as the input 
    cout<<s1.compare(str); // returns 0 if both are equal else it will return any val greater than or less than 0
    cout<<s1.find("aa"); // returns index of first occurence of the char in string 
    cout<<s1.erase(2,3); // deletes 3 chars starting from index 2
    s1.insert(2,"aman");//insert the string "aman" starting from index 2 
    cout<<s1.size()<<" "<<s1.length()<<endl; // Gives the size of the the string
    cout<<s1.substr(2,2)<<endl; // returns susbstring starting from index 2 to (2+2) i.e of length 2
    cout<<s1.substr(1)<<endl;// Same as s1[1:] 
    cout<<s1.substr(2)<<endl; //same as s1[2:]
    string a = "2809";
    int x = stoi(a); // converts string to integer
    x++;
    string b = to_string(x); // converts int to string

    string s5 = "aljdfjasdifaidndsaiu";
    sort(s5.begin(),s5.end()); // It is in algorithm header file
    cout<<s5<<endl;
    return 0;
}  