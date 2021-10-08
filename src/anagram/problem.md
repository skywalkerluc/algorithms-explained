*Given an array of strings, group the anagrams, the strings that are composed by same character. You should return it as an array of arrays.*

Example 1:

```
    Input:
    S = ["abc", "bca", "elf", "aab", "fle", "cab", "lel", "123", "231", "324"]
    Output:
    [
      ["abc", "bca", "cab"],
      ["123", "231"],
      ["elf", "fle"],
      ["324"],
      ["aab"],
      ["lel"]
    ]
    Explanation: Given that "abc", "bca" and "cab" got same characters, it should be grouped.
```

### Your Task:
You don't need to read input or print anything. *Your task is to complete the function groupAnagrams() which accepts an array S[] and returns an bi-dimensional array with all grouped anagrams. It should be ordered by sub-array length.*


Constraints:
```
  Each string has a maximum size of 100 characters.
```


*Time Complexity: O(n * k) (k is the length of the largest string)*

*Space Complexity: O(n)*
