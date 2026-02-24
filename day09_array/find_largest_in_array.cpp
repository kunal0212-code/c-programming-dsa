// travese - travelling through complete array
#include <iostream>
using namespace std;

int main () {
    int arr[] = {4,9,15,24,75};
    int n = sizeof(arr) / sizeof(int) ; 

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n ; i++) {
        if (arr[i] > max) {
            max = arr[i] ;

        }
         if (arr[i] < min) {
            min = arr[i];
        }
    }    

    cout <<"largest = " << max << endl;
    cout <<"smallest = " << min << endl;
    return 0; 


}
