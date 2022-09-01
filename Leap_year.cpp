#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    if( n%400==0){
        cout<<"it is leap year";
    }
    else if(n%100==0){
        cout<<"it is not a leap year";
    }
    else if(n%4==0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"not a leap year";
    }

    
    return 0;
}