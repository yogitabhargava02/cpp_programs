#include<bits/stdc++.h>
using namespace std;
void binary_todecimal(string s){
    int base=1;
    int ans=0;
for(int i= s.length()-1; i>=0; i--){
ans=ans+( (int)(s[i]-'0')*base);
base=base*2;
}
cout<<ans;
}


int main(){
    string s;
    cin>>s;

binary_todecimal(s);

    return 0;
}