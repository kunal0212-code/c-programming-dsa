#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    char *ptr = &ch;

    cout << ptr << "\n";
    ptr++ ; //1ch ++
    cout << ptr << "\n";
 
    int k = 5;
    int *ptr1 = &k;
    cout << ptr1 << endl;
    ptr1++;
    cout << ptr1 << endl;
    ptr1--;

    return 0;

}