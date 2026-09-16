#include <vector>

using Matrix = std::vector<std::vector<double>>;

// Calculates relative percentage of each element per row
inline Matrix row_percentage(const Matrix& mat) {
    if (mat.empty()) return {};
    size_t rows = mat.size();
    size_t cols = mat[0].size();
    Matrix result(rows, std::vector(cols, 0.0));

    for (size_t i = 0; i < rows; ++i) {
        double row_sum = 0.0;
        for (size_t j = 0; j < cols; ++j) {
            row_sum += mat[i][j];
        }
        for (size_t j = 0; j < cols; ++j) {
            result[i][j] = (row_sum != 0.0) ? (mat[i][j] / row_sum) * 100.0 : 0.0;
        }
    }
    return result;
}

