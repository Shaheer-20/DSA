#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of  elemnets";
    cin>>n;

    int arr[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }

     int cnt=1;
     while(cnt<n)
     {
        for(int i=0;i<n-cnt;i++){
            if(arr[i]>arr[i+1])
            {
               int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
     cnt++;
     }

     for(int i=0;i<n;i++){
        cout<<"\n"<<arr[i]<<endl;
     }
}

