#include<bits/stdc++.h>
using namespace std;

string decimal_tobinary(int n){
    string s= "";
    while(n>0){
    int t=n%2;
    s=s+to_string(t);
n=n/2;
}
reverse(s.begin(), s.end());
return s;
}
int main(){
    int n;
    cin>>n;
   cout<<decimal_tobinary(n);
    return 0;
}