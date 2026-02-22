#include <iostream>
using namespace std;

void print(int arr[] , int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[] , int n) {

    for(int i=0; i<n; i++) {
        bool isSwap = false;
        cout << "outer loop";
        for(int j=0; j<n-i-1; j++) {
            cout << "inner loop";
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) {
            // array is already sorted
            return ;
        }
    }

    print(arr , n) ; 
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    bubblesort(arr , 10) ;
    return 0;
}