#include <iostream>
using namespace std;

int main() {
    int n,mx=-19999;
    cout<<"Enter N"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
         cout<<mx<<endl;     
    }
    return 0;
}