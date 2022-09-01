#include<iostream>
using namespace std; 
int main(){
    int n,i; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Please enter a number greater than 0."<<endl;
    }
    for(i=1; i<=n; i++){
       if( n%i==0);
       cout<<"The factors of"<<" "<<n<<": "<<i<<" ";
    }
    return 0;
}