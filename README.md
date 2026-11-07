# Flag of Georgia with a missing cross - a problem from SPOJ
Write a flag of Georgia with stars (small crosses) to the output. But be careful, there is one small cross missing! 

In the input, there are two integers $k$ ($1 \le k \le 20$) and $s$ ($1 \le s \le 4$). The flag is drawn within a square of size $n \times n$, where $n = 4k + 14$. The small cross is missing in the field denoted by $s$, where the fields are numbered as follows:

```
*********
* 1 * 2 *
*********
* 3 * 4 *
*********
```

## Input

The input contains two space-separated integers $k$ and $s$, where $1 \le k \le 20$ and $1 \le s \le 4$.

## Output

Print the $n \times n$ grid representing the flag of Georgia with the small cross missing in quadrant $s$.

## Examples

### Example 1

**Input:**
```
1 1
```

**Output:**
```
******************
*       **       *
*       **       *
*       **   *   *
*       **  ***  *
*       **   *   *
*       **       *
*       **       *
******************
******************
*       **       *
*       **       *
*   *   **   *   *
*  ***  **  ***  *
*   *   **   *   *
*       **       *
*       **       *
******************
```

### Example 2

**Input:**
```
2 4
```

**Output:**
```
**********************
*         **         *
*         **         *
*         **         *
*    *    **    *    *
*   ***   **   ***   *
*    *    **    *    *
*         **         *
*         **         *
*         **         *
**********************
**********************
*         **         *
*         **         *
*         **         *
*    *    **         *
*   ***   **         *
*    *    **         *
*         **         *
*         **         *
*         **         *
**********************
```
