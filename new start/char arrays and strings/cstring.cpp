#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // char str1[100];
    // char str2[100] = "hello world";
    
    // str1 = "apna college";

    char str1[100] = "hello";
    char str2[100] = " world";
    // strcpy(str1, str2);
    strcat(str1,str2);
    cout << str1 << endl;
    return 0;
}