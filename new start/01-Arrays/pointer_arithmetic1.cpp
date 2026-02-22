// increment and decrement operators
// ptr++ or ++ptr - basically 4 btyes ko add krna not 1 byte for int pointer but in char 1 btye add hoga
// ptr-- or --ptr

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;

    cout << aptr << endl;
    aptr++ ; // 1 int ++ - 4 bytes
    cout << aptr << endl;

  

    return ;
    


}