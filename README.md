# Efficient-Palindrome-Check (Optimal Two-Pointer Approach)

This repository contains a high-performance C++ solution for determining if a string is a palindrome. This implementation is optimized to handle large datasets efficiently.

---

## 📋 Problem Statement

**Task:** You are given a string `s`. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

**Examples:** - **Input:** `s = "abba"` | **Output:** `true`  
  *Explanation:* "abba" reads the same forwards and backwards.
- **Input:** `s = "abc"` | **Output:** `false`  
  *Explanation:* "abc" does not read the same forwards and backwards.

**Constraints:** - $1 \le s.size() \le 10^6$  
- The string `s` contains only lowercase English letters (`a-z`).

---

## 🚀 How the Algorithm Works

The solution uses the **Two-Pointer Technique** to verify symmetry without using extra memory:

1.  **Initialize:** Place a `st` (start) pointer at index `0` and an `end` pointer at `s.length() - 1`.
2.  **Compare:** In a loop, compare the characters at `s[st]` and `s[end]`.
3.  **Early Exit:** If any mismatch is found, immediately return `false`.
4.  **Convergence:** Move pointers toward the center (`st++`, `end--`). If they meet or cross, the string is a palindrome.



## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n)$ | Linear time. We traverse the string once, performing at most $n/2$ comparisons. |
| **Space Complexity** | $O(1)$ | Constant space. We do not create a copy of the string, which is crucial for the $10^6$ constraint. |

---

## 💻 Code Overview

```cpp
class Solution {
  public:
    bool isPalindrome(string& s) {
        int st = 0; 
        int end = s.length() - 1;
        
        while(st < end) {
            if (s[st] != s[end]) {
                return false;
            }
            st++; 
            end--;             
        }
        return true; 
    }
};
```  
### Key Features:
* **Optimal Space:** Efficiently handles the $10^6$ constraint without memory overflow.
* **Early Exit:** Returns `false` as soon as a mismatch is found, saving unnecessary comparisons.
* **Case Sensitivity:** Designed for lowercase English letters as per problem constraints.

--- 

## 📝 Example
**Input:** `s = "abba"`  
**Execution:** - `s[0]` ('a') == `s[3]` ('a') 
- `s[1]` ('b') == `s[2]` ('b')
**Output:** `true`

---
*Optimized for high-volume string processing and competitive programming.*
``` 
