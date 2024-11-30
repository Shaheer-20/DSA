#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element of unsorted array
        swap(arr[min_idx], arr[i]);
    }

    cout << "Sorted elements are: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
