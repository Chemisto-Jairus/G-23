## Task Documentation: Percentage Operations (Pair 2)

### 1. Requirements
Implement two matrix transformations using standard C++ vectors:
- `row_percentage()`: Computes relative percentages across rows.
- `column_percentage()`: Computes relative percentages down columns.

### 2. Implementation Strategy
We iterate over the matrix dimensions using two nested loop passes:
- **Pass 1:** Accumulate total sums across each row/column.
- **Pass 2:** Normalize each matrix element against its respective sum and multiply by 100.

### 3. Key Decisions
- **Zero-Division Defense:** Checked `row_sum != 0.0` and `col_sum != 0.0` before division to prevent `NaN` values on zeroed rows/columns.
- **Pass-by-Reference:** Passed input matrices as `const Matrix&` to minimize unnecessary memory copies.

### 4. Testing Approach
We tested using a 2x3 matrix containing standard positive values as well as a zero-row edge case (`{0.0, 0.0, 0.0}`) to verify stability.

### 5. Working Example

**Input Data:**
[ 10.0, 20.0, 30.0 ]  (Row total = 60.0)
[ 30.0, 10.0, 60.0 ]  (Row total = 100.0)

**Row Percentage Output:**
[ 16.67%, 33.33%, 50.00% ]
[ 30.00%, 10.00%, 60.00% ]

**Column Percentage Output:**
[ 25.00%, 66.67%, 33.33% ]
[ 75.00%, 33.33%, 66.67% ]
