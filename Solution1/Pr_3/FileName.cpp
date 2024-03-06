#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter 10 array elements: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    int searchValue;
    cout << "Enter the value to search for: ";
    cin >> searchValue;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == searchValue) {
            cout << "Value " << searchValue << " found in position: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Value " << searchValue << " not found in array." << endl;

        return 0;
    }
}
