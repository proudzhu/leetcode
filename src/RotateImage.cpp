#include "RotateImage.hpp"

void transpose(std::vector<std::vector<int>> &matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}

void fliplr(std::vector<int> &vec) {
    int n = vec.size();

    int i = 0, j = n - 1;
    while (i < j) {
        int tmp = vec[i];
        vec[i] = vec[j];
        vec[j] = tmp;

        i++;
        j--;
    }
}

void fliplr(std::vector<std::vector<int>> &matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        fliplr(matrix[i]);
    }
}

void rotateImage(std::vector<std::vector<int>>& matrix) {
    transpose(matrix);
    fliplr(matrix);
}
