# 🔥 02 — Arrays (Advanced Problems)

Classic array problems frequently asked in coding interviews — subarrays, Kadane's algorithm, stock profit, and trapping rainwater.

## 📄 Files

| File | Description |
|------|-------------|
| `print_subarrays.cpp` | Print all subarrays of a given array |
| `max_subarray_sum.cpp` | Maximum Subarray Sum — **Brute Force** `O(n³)` |
| `max_subarray_sum2.cpp` | Maximum Subarray Sum — **Optimized** `O(n²)` (prefix sum idea) |
| `max_subarray_sum3.cpp` | Maximum Subarray Sum — **Kadane's Algorithm** `O(n)` |
| `buy_sellstock.cpp` | Best Time to Buy and Sell Stock — `O(n)` approach |
| `trapping_rainwater.cpp` | Trapping Rainwater Problem — using left-max and right-max arrays |

## 💡 Key Concepts

- **Subarrays** are contiguous parts of an array; total count = `n*(n+1)/2`
- **Kadane's Algorithm**: Reset running sum to `0` when it goes negative → `O(n)` time, `O(1)` space
- **Buy & Sell Stock**: Track the best buy price seen so far, compute max profit at each step
- **Trapping Rainwater**: Water at index `i` = `min(leftMax[i], rightMax[i]) - height[i]`
