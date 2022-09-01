#include<iostream>
using namespace std;
int main(){
    int n;
    long factorial=1.0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n<0){
        cout<<"Enter number greater than 0 ";
        
    }
    else{
        for(int i=1; i<=n; ++i){
            factorial*=i;
        }
        cout<<"factorial of a number is:"<<" "<<factorial;
    }
return 0;
}