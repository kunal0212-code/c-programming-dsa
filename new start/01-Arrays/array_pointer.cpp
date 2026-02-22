#include <iostream>
using namespace std;

int main() { // int mein toh possible hai but array pointer mein not possible
    int x = 10;
    int *ptr = &x;//pointer banaya usme x ka address store kara diya


    int  y = 25;
    ptr = &y;
    cout << *ptr << endl;//*ptr is for value and only ptr is address
    return 0;
    

}

int main1() {
    int arr[5];
    cout << arr << endl;
    int z = 25;
    arr = &zreturn 0; // yeh bs read only value hai.
}