#include <iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter n";
cin>>n;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        cout<<"non prime number"<<endl;
        break;
    }
    if(i==n){
    cout<<"prime number";
    }
}
return 0;
}