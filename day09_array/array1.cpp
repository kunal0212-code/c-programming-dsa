// linear data structure
#include <iostream>
using namespace std;

main() {
    // 0 to 49
    // int marks[50];
    // int marks[] = {1,2,3};
    int marks[5]  = {1,2,3}; 
    cout << marks[0] << "\n";
    cout << marks[1] << "\n";
    cout << marks[2] << "\n";
    cout << marks[3] << "\n";
    cout << marks[60] << "\n";
  

    // size of array
    int n = sizeof(marks) / sizeof(int);
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;

}