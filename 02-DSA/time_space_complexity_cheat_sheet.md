# Time & Space Complexity Cheat Sheet

## 1. What is Time Complexity?

Time complexity describes **how the number of operations grows as the input size `n` grows**.

It does not mean actual clock time such as seconds or milliseconds.

---

## 2. Common Time Complexities

| Complexity | Name | Typical Pattern |
|---|---|---|
| `O(1)` | Constant | Fixed number of operations |
| `O(log n)` | Logarithmic | Repeatedly divide the problem |
| `O(n)` | Linear | One loop through `n` elements |
| `O(n log n)` | Linearithmic | Linear work across logarithmic levels |
| `O(n²)` | Quadratic | Two nested loops |
| `O(2ⁿ)` | Exponential | Multiple recursive branches |

---

## 3. `O(1)` - Constant

The amount of work does not depend on `n`.

```cpp
cout << arr[0];
```

Whether the array has 10 or 1,000,000 elements, only one element is accessed.

**Time: `O(1)`**

Think:

> Same amount of work every time.

---

## 4. `O(log n)` - Logarithmic

The problem gets significantly smaller on every iteration.

Example:

```cpp
while (n > 1) {
    n = n / 2;
}
```

Example:

```text
16 → 8 → 4 → 2 → 1
```

Only 4 iterations for `n = 16`.

Another example from Basic Maths:

```cpp
while (num > 0) {
    num = num / 10;
}
```

The number of iterations is related to the number of digits.

**Time: `O(log n)`**

Think:

> Keep dividing the problem.

---

## 5. `O(n)` - Linear

The work grows directly with `n`.

```cpp
for (int i = 0; i < n; i++) {
    cout << i;
}
```

If `n = 100`, the loop runs about 100 times.

If `n = 1000`, it runs about 1000 times.

**Time: `O(n)`**

Think:

> One pass through the input.

### Example: Divisors

```cpp
for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
        cout << i;
    }
}
```

You check every number from `1` to `n`.

**Time: `O(n)`**

---

## 6. `O(n log n)` - Linearithmic

Usually appears when you perform linear work over logarithmic levels.

A famous example is **Merge Sort**.

The array is repeatedly divided:

```text
8
↓
4 + 4
↓
2 + 2 + 2 + 2
↓
1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
```

The number of levels is approximately `log n`, while processing each level takes `O(n)`.

**Time: `O(n log n)`**

Think:

> Linear work × logarithmic levels.

---

## 7. `O(n²)` - Quadratic

Usually appears with two nested loops.

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << "*";
    }
}
```

For `n = 5`:

```text
5 × 5 = 25
```

For `n = 1000`:

```text
1000 × 1000 = 1,000,000
```

**Time: `O(n²)`**

Think:

> For every element, process every element.

Common examples:

- Bubble Sort
- Selection Sort
- Comparing every pair

---

## 8. `O(2ⁿ)` - Exponential

The amount of work grows extremely quickly.

Example:

```cpp
void f(int n) {
    if (n == 0)
        return;

    f(n - 1);
    f(n - 1);
}
```

The number of calls roughly doubles as `n` increases.

```text
n = 10 → about 1,024
n = 20 → about 1,048,576
```

**Time: `O(2ⁿ)`**

Think:

> Each step creates multiple new branches.

You will commonly encounter this in recursion and backtracking.

---

# 9. Comparing Growth

For `n = 1000`, roughly:

| Complexity | Approximate Work |
|---|---:|
| `O(1)` | 1 |
| `O(log n)` | ~10 |
| `O(n)` | 1,000 |
| `O(n log n)` | ~10,000 |
| `O(n²)` | 1,000,000 |
| `O(2ⁿ)` | Extremely large |

This is why an algorithm that works for a small `n` may become unusable for a large `n`.

---

# 10. Space Complexity

Space complexity describes **how much additional memory an algorithm needs as `n` grows**.

For DSA, you will often focus on **auxiliary/extra space**.

---

## `O(1)` Space

Only a fixed number of variables are used.

```cpp
int sum = 0;
int count = 0;
int temp = 0;
```

Even if `n` becomes huge, you still use the same number of variables.

**Space: `O(1)`**

Example:

```cpp
int n1 = 20;
int n2 = 15;
int rem;

while (n1 > 0 && n2 > 0) {
    if (n1 > n2)
        n1 = n1 % n2;
    else
        n2 = n2 % n1;
}
```

The extra variables do not grow with `n`.

**Space: `O(1)`**

---

## `O(n)` Space

Memory grows with the input size.

```cpp
vector<int> v(n);
```

If:

```text
n = 10       → 10 integers
n = 1000     → 1000 integers
n = 1000000  → 1,000,000 integers
```

**Space: `O(n)`**

Think:

> My extra memory grows with `n`.

---

# 11. Divisor Example: No Storage

```cpp
int n = 36;
int i = 1;

while (i <= n) {
    if (n % i == 0) {
        cout << i;
    }
    i++;
}
```

You only use a fixed number of variables.

**Time: `O(n)`**

**Space: `O(1)`**

You print the divisors but do not store them.

---

# 12. Divisor Example: Store in Vector

```cpp
vector<int> res;

for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
        res.push_back(i);
    }
}
```

You now store the divisors in `res`.

**Time: `O(n)`**

**Output storage: depends on the number of divisors.**

For a loose upper bound, this can be described as `O(n)` space, although in a more precise analysis the number of divisors is much smaller than `n`.

If an interviewer asks for **auxiliary space excluding the returned output**, mention that distinction.

---

# 13. Quick Pattern Recognition

### One fixed operation

```cpp
cout << arr[0];
```

→ **`O(1)`**

### One loop

```cpp
for (int i = 0; i < n; i++)
```

→ **`O(n)`**

### Repeated division

```cpp
n = n / 2;
```

→ usually **`O(log n)`**

### Two nested loops

```cpp
for (...)
    for (...)
```

→ usually **`O(n²)`**

### Linear work over logarithmic levels

→ **`O(n log n)`**

### Two recursive branches

```cpp
f(n - 1);
f(n - 1);
```

→ often **`O(2ⁿ)`**

---

# 14. Easy Mental Model

When analyzing code, ask:

### Time

> **How many times does my code execute as `n` grows?**

### Space

> **How much extra memory do I need as `n` grows?**

Then look for patterns:

```text
Fixed work                    → O(1)
Divide repeatedly             → O(log n)
One loop                      → O(n)
Nested loops                  → O(n²)
Linear × logarithmic levels   → O(n log n)
Multiple recursive branches   → O(2ⁿ)
```

For space:

```text
Fixed variables               → O(1)
Array/vector of size n        → O(n)
2D array of n × n             → O(n²)
```

---

# 15. DSA Workflow

When solving a problem:

```text
Understand the problem
        ↓
Write brute-force solution
        ↓
Check Time Complexity
        ↓
Check Space Complexity
        ↓
Ask: Can I optimize it?
        ↓
Write optimal solution
        ↓
Compare complexities
```

Don't memorize Big-O blindly. Learn to look at the code and ask how its work and memory change when `n` gets larger.
