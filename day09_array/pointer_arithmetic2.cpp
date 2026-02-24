#include <iostream>
using namespace std;

// program 1

// int main() {
//     int a = 5;
//     int *ptr = &a;

//     cout << ptr << endl;
//     cout << (ptr + 3) << endl;
//     return 0;
// }

//---------------------------------------------


//program 2

// int main() {
//     int a = 5;
//     int *ptr = &a;

//     cout << ptr << endl;
//     ptr = ptr + 3;
//     cout << (ptr - 3) << endl;
//     return 0;
// }

// -------------------------------------------------

//program 3 - main use in array
void printArr(int *ptr , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << *ptr << endl;
        ptr = ptr + 1;

    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int) ;
    printArr(arr , n);
    return 0;
}