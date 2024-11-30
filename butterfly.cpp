#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "ENTER N: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl; // Add a newline character after each row
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl; // Add a newline character after each row
    }
}
