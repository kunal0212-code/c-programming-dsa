//brute force approach - 1st approach.
#include <iostream>
using namespace std;

void maxSubarraySum1(int *arr,int n) {
    int maxSum;

    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currSum = 0;
            for(int i=start; i<=end; i++) {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
    }
}