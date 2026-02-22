//g++ output_input1.cpp
// ./a.exe
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter length of array : ";
    cin >> n;

    int arr[n]; // i think i need to update my c++ version as it is only possible in new ones.
    // int n = sizeof(arr) / sizeof(int);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}