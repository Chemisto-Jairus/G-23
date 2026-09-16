// 1. Row Difference: mat[i][j] - mat[i-1][j] (First row initialized to 0)
Matrix row_difference(const Matrix& mat) {
    size_t rows = mat.size();
    if (rows == 0) return {};
    size_t cols = mat[0].size();

    Matrix result(rows, vector(cols, 0.0));

    for (size_t i = 1; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result[i][j] = mat[i][j] - mat[i - 1][j];
        }
    }
    return result;
}
