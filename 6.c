#include <stdio.h>

void readMatrix(int rows, int cols, float matrix[rows][cols]) {
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int rows2, int cols2, float matrix1[rows1][cols1], float matrix2[rows2][cols2], float result[rows1][cols2]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return;
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < rows2; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, float matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p;

    printf("Enter the size of the first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the size of the second matrix (n x p): ");
    scanf("%d", &p);

    float matrix1[m][n], matrix2[n][p], result[m][p];

    readMatrix(m, n, matrix1);
    readMatrix(n, p, matrix2);

    multiplyMatrices(m, n, n, p, matrix1, matrix2, result);

    printf("\nResultant Matrix:\n");
    printMatrix(m, p, result);

    return 0;
}
