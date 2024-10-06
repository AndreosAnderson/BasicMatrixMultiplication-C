#include <stdlib.h>

void multiplyMatrix(double** m1, double** m2, double** result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;

            for (int k = 0; k < n; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

double** allocateMatrix(int n) {
    double** matrix = (double**)malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double*)malloc(n * sizeof(double));
    }
    return matrix;
}

void freeMatrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}