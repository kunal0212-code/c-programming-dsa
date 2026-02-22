# 🔃 04 — Sorting Algorithms

Implementation of fundamental sorting algorithms in C++.

## 📄 Files

| File | Description |
|------|-------------|
| `bubble_sort.cpp` | Bubble Sort — basic implementation `O(n²)` |
| `bubble_sort2.cpp` | Bubble Sort — **optimized** with early exit when already sorted |
| `selection_sort.cpp` | Selection Sort — find minimum and swap `O(n²)` |
| `insertion_sort.cpp` | Insertion Sort — place each element in its correct position `O(n²)` |
| `counting_sort.cpp` | Counting Sort — frequency-based sort `O(n + range)` |
| `practise_Q.cpp` | Practice — sorting characters in descending order using insertion sort |

## 💡 Key Concepts

| Algorithm | Time (Best) | Time (Worst) | Space | Stable? |
|-----------|------------|--------------|-------|---------|
| Bubble Sort | `O(n)` | `O(n²)` | `O(1)` | ✅ Yes |
| Selection Sort | `O(n²)` | `O(n²)` | `O(1)` | ❌ No |
| Insertion Sort | `O(n)` | `O(n²)` | `O(1)` | ✅ Yes |
| Counting Sort | `O(n+k)` | `O(n+k)` | `O(k)` | ✅ Yes |

- **Bubble Sort** repeatedly swaps adjacent elements; optimized version exits early if no swaps happen
- **Selection Sort** finds the minimum element each pass and swaps it to its position
- **Insertion Sort** builds the sorted portion one element at a time (like sorting cards)
- **Counting Sort** is non-comparison-based; works great when range (`k`) is small
