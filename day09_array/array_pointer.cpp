#include <iostream>
using namespace std;

int main () {
   int x = 10;
   int *ptr = &x;

   int y = 25;
   ptr = &y;
   cout << *ptr << "\n";
   return 0 ;
   
   
    // int arr[5] ; 
    // cout << arr << "\n";
    // int y = 25;
    // arr = &y;
    // return 0;

}