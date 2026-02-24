#include <iostream>
using namespace std;

int main() {
    int arr[3][4]; //2d array created [rows][colums]
    int n=3 , m=4;

    //to make loop
    for(int  i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
    //to print loop
    for(int  i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}