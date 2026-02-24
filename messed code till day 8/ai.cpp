#include <iostream>
using namespace std;

bool isPrime(int n) {
    // 1. Handle edge cases
    if (n <= 1) {
        return false;
    }

    // 2. Loop MUST start at 2
    // 3. Condition MUST be strictly less than n (i < n) 
    //    OR use the optimization (i * i <= n)
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it is prime
}

void allPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    allPrime(50); // This will print primes from 2 to 50
    return 0;
}