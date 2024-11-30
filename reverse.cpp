#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cout<<"ENTER N";
    cin>>n;

    int rvs=0;
    while(n>0){
        int ld=n%10;
        rvs=rvs*10 +ld;
        n=n/10;
    }
    cout<<rvs;
}