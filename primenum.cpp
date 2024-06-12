#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,n;
    cout<<"ENTER N";
    cin>>n;

    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"NON PRIME";
        }
        else{
            cout<<"PRIME";
        }
      
    }
}