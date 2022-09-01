#include<iostream>
using namespace std;
int main(){
    int n;
    int n0=0;
    int n1=1;
    int n2;
   
    cout<<"Enter the number:"<<endl;
    cin>>n; 
     cout<<n0<<" "<<n1<<" ";
    for(int i=0; i<=n-2; i++){
        n2=n0+n1;
      cout<<n2<<" ";
        n0=n1;
        n1=n2;


       
    } 
    return 0;
}