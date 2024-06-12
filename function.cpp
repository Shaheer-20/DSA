#include <iostream>
using namespace std;

   int add(int n1,int n2){
    int sum=n1+n2;
    return sum;
   }

   int main()
   {
    int a,b;
    cout<<"ENTER A";
    cin>>a;
    cout<<"ENTER B";
    cin>>b;
    int sum=add(a,b);
    cout<<"SUM IS  "<<endl<<add(a,b);
    return 0;
   }





