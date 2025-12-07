#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<" Enter the size of array : ";
    cin>>n;
    int arr[n];
    //int n = sizeof(arr) / sizeof(int);
    //cout << "The size of the array is: " << n << endl;

    // Input
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Output
    cout << "\nYour array elements are: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    cout << endl;
    return 0;
}
