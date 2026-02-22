#include <iostream>
using namespace std;

// Function to print array elements
// We must pass 'n' (size) because 'arr' decays into a pointer here
// sizeof(arr) inside this function would give 8 (pointer size), not 20 (array size)
void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // Calculate size of array in the main function
    // Total bytes (20) / Size of one int (4) = 5 elements
    int n = sizeof(arr) / sizeof(int);

    // Pass the array and its calculated size to the function
    printArr(arr, n);

    return 0;
}