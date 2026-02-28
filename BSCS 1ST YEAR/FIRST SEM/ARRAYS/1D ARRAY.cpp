#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << "The sum is: " << sum << "\n";
    return 0;
}
