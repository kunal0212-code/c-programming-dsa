#include <iostream>
using namespace std;
//  output

int main () {
    int arr[25] = {7,2,9,11,16};
    int n = sizeof(arr) / sizeof(int);

    for (int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}