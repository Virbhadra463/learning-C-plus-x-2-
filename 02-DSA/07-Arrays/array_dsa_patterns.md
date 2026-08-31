# Array DSA Patterns I've Learned

## My Current Array Toolkit

| Pattern / Technique | Problems / Examples | Status |
|---|---|---|
| **Basic Array Traversal** | Leaders in an Array | ✅ Learned |
| **Sorting + Traversal** | Longest Consecutive Sequence | ✅ Learned |
| **HashSet / Unordered Set** | Longest Consecutive Sequence | ✅ Learned |
| **Two Pointers** | 2Sum, 3Sum, 4Sum | ✅ Learned |
| **Two Pointers + Sorting** | 3Sum Closest | ✅ Learned |
| **Prefix Sum + HashMap** | Subarray Sum Equals K | ✅ Learned |
| **Matrix Traversal** | Set Matrix Zeroes, Spiral Matrix | ✅ Learned |
| **Matrix Manipulation** | Rotate Image | ✅ Learned |
| **Kadane's Algorithm** | Maximum Subarray | ✅ Learned |
| **Intervals + Sorting** | Merge Intervals | ✅ Learned |
| **Greedy** | Basic exposure through Merge Intervals | 🟡 Basic exposure |
| **Two Pointers from Both Ends** | Trapping Rain Water | 🟡 Currently learning |
| **Sliding Window** | — | ❌ Not learned yet |
| **Binary Search on Arrays** | — | ❌ Not learned yet |
| **Monotonic Stack** | — | ❌ Not learned yet |
| **In-place Array Manipulation** | Some exposure | 🟡 Not a full pattern yet |

## Patterns I Know

### 1. Basic Array Traversal
- Single loops
- Nested loops
- Tracking values such as `min`, `max`, and counts

### 2. Sorting + Traversal
Useful when ordering the array makes the pattern easier to identify.

Examples:
- Longest Consecutive Sequence
- Merge Intervals

Typical complexity:
- Sorting: `O(n log n)`
- Traversal: `O(n)`

### 3. Hashing
Using:
- `unordered_set`
- `unordered_map`

Examples:
- Longest Consecutive Sequence
- Subarray Sum Equals K

Important distinction:
- `set` / `map` → usually ordered, `O(log n)` operations
- `unordered_set` / `unordered_map` → hash table, average `O(1)` operations

### 4. Two Pointers
You've used this heavily.

Examples:
- 2Sum
- 3Sum
- 4Sum
- 3Sum Closest

Common structure:
```cpp
int left = ...;
int right = ...;

while(left < right) {
    // compare / calculate
    // move left or right
}
```

### 5. Prefix Sum + HashMap

Example:
- Subarray Sum Equals K

Core idea:
```text
current prefix sum = x
need previous prefix sum = x - k
```

Store prefix sums and their frequencies in a hashmap.

### 6. Matrix Patterns

You've worked with:
- Matrix traversal
- Set Matrix Zeroes
- Spiral Matrix
- Rotate Image

Important skills:
- Row/column traversal
- Boundary tracking
- Transpose
- Reverse rows

### 7. Kadane's Algorithm

Example:
- Maximum Subarray

Core idea:
- Maintain the best subarray ending at the current position.
- Decide whether to extend the current subarray or start a new one.

Typical complexity:
```text
Time:  O(n)
Space: O(1)
```

### 8. Merge Intervals

You've learned:
```text
Sort intervals
       ↓
Track current interval
       ↓
Check overlap
       ↓
Merge or save
```

Overlap condition after sorting:
```cpp
next.start <= current.end
```

When overlapping:
```cpp
current.end = max(current.end, next.end);
```

Typical complexity:
```text
Time:  O(n log n)
Space: O(n) including output
```

### 9. Trapping Rain Water — Currently Learning

You're currently learning the two-pointer boundary technique.

Core concepts:
- `left`
- `right`
- `leftMax`
- `rightMax`

Typical optimal complexity:
```text
Time:  O(n)
Space: O(1)
```

## Patterns Still To Learn

### Sliding Window
Useful for contiguous subarrays/substrings.

Types:
- Fixed-size window
- Variable-size window

### Binary Search
Useful when the search space is sorted or can be treated as a monotonic search space.

### Stack / Monotonic Stack
Important for problems involving:
- Next greater element
- Previous smaller element
- Largest Rectangle in Histogram

### Advanced Greedy
You've only had basic exposure so far.

### Dynamic Programming
Not yet covered as an array pattern.

## Recommended Learning Order

```text
Current
  ↓
Trapping Rain Water
  ↓
Sliding Window
  ↓
Binary Search
  ↓
Stack
  ↓
Monotonic Stack
  ↓
Advanced Greedy
  ↓
Dynamic Programming
```

## Quick Checklist

- [x] Array Traversal
- [x] Sorting + Traversal
- [x] HashSet / HashMap
- [x] Two Pointers
- [x] Prefix Sum
- [x] Kadane's Algorithm
- [x] Matrix Traversal
- [x] Matrix Manipulation
- [x] Merge Intervals
- [ ] Sliding Window
- [ ] Binary Search
- [ ] Monotonic Stack
- [ ] Advanced Greedy
- [ ] Dynamic Programming
