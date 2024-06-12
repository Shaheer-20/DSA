#include <iostream>
using namespace std;

int main(){
    int choice, n1, n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    cout << "Enter your choice FOR:\n"
         << "1. ADDITION\n"
         << "2. SUBTRACTION\n"
         << "3. MULTIPLICATION\n"
         << "4. DIVISION\n"
         << "5. EXIT\n";
    cin >> choice;

    int t;
    switch (choice) {
        case 1:
            t = n1 + n2;
            cout << "SUM: " << t << endl;
            break;
        case 2:
            t = n1 - n2;
            cout << "DIFFERENCE: " << t << endl;
            break;
        case 3:
            if (n1 == 0 || n2 == 0) {
                cout << "Error: cannot multiply by zero." << endl;
                return 1;
            }
            t = n1 * n2;
            cout << "PRODUCT: " << t << endl;
            break;
        case 4:
            if (n2 == 0) {
                cout << "Error: cannot divide by zero." << endl;
                return 1;
            }
            t = n1 / n2;
            cout << "DIVISION: " << t << endl;
            break;
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "ERROR 404: Invalid choice." << endl;
    }
    return 0;
}