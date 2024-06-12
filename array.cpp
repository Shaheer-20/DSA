#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> a(n); // Use a std::vector

    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "ENTERED ELEMENTS ARE" << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}