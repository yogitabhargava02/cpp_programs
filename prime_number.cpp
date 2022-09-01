#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime=true;
    cout<<"Enter a positive number:"<<endl;
cin>>n;
if(n==0||n==1){
    isPrime=false;

}

    for(i=2; i<=n/2; ++i){
        n%i==0;
        isPrime=false;
        break;
    }

if (isPrime){
    cout<<"It is a prime number";
}
else{
    cout<<"It is not a prime number.";
}
    return 0;
}