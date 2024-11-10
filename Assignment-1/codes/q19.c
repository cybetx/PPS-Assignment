/*19. Write a program that find the product of two matrices and prints the product matrix */

#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Number of columns in matrix 1 must equal the number of rows in matrix 2.\n");
        return 1;
    }

    int mtx1[m][n], mtx2[p][q], mtx3[m][q];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mtx1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &mtx2[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            mtx3[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                mtx3[i][j] += mtx1[i][k] * mtx2[k][j];
            }
        }
    }

    printf("Product of matrix 1 and matrix 2 is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", mtx3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
