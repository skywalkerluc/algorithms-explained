*Given a sorted array arr[] of size N and a number X, find a pair in array whose sum is closest to X.*

Example 1:
```
    Input:
    N = 6, X = 54
    arr[] = {10, 22, 28, 29, 30, 40}
    Output: 22 30
    Explanation: As 22 + 30 = 52 is closest to 54.
```

Example 2:

```
    Input:
    N = 5, X = 10
    arr[] = {1, 2, 3, 4, 5}
    Output: 4 5
    Explanation: As 4 + 5 = 9 is closest to 10.
```

### Your Task:
You don't need to read input or print anything. *Your task is to complete the function sumClosest() which takes arr[] of size n and x as input parameters and returns a list containing 2 integers denoting the required pair.* If multiple pairs are possible return the largest sum pair.


Constraints:
```
  2 <= N <= 10ˆ5
  0 <= X <= 10ˆ6
  0 <= arr[i] <= 10ˆ6
```