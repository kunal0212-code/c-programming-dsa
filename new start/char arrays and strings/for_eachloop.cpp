#include <iostream>
#include <string>
using namespace std;

int main() {
    // method 1
    string str = "apna college!" ;

    for(int i=0; i<str.length(); i++) {
        cout << str[i] << " ";
    }

    cout << "\n";


    // method 2
    for(char ch : str) {
        cout << ch << ",";
    }
    cout << endl;
    return 0;
}