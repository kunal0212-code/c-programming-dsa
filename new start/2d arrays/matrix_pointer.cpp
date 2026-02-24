#include <iostream>
using namespace std;

void func(int mat[][4], int n, int m) {
    cout << "0th row ptr" << mat << endl;
    cout << "1th row ptr" << mat+1 << endl;
    cout << "2th row ptr" << mat+2 << endl;


    cout << "0th row ptr value" << *mat << endl;//derefernce
    cout << "1th row ptr value" << *(mat+1) << endl;
    cout << "2th row ptr value" << *(mat+2) << endl;
}

void func2(int (*mat)[4], int n,int m) {
    
}



int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
                        
    
                         

    return 0;                    
}
