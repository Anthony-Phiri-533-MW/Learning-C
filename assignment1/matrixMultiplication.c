#include <stdio.h>

int main() {
    int R1, C1, R2, C2;

    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d %d", &R1, &C1);

    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d %d", &R2, &C2);

    if (C1 != R2) {
        printf("The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2\n");
        return 1;
    }

    int m1[R1][C1], m2[R2][C2], result[R1][C2];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Resultant Matrix is:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < R2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
