//method 1 with extra space
#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    //making copyarr
    int copyArr[n];
    for(int i=0; i<n; i++) {
        int j = n-i-1; //eg int j = 5-0-1 = 4
        copyArr[i] = arr[j];
    }

    for(int i=0; i<n; i++) {
        arr[i] = copyArr[i];
    }

    printArr(arr,n);
    return 0 ;

}
// here space complexity is O(n) which is problem , we need O(1)
// time complexity is O(n)