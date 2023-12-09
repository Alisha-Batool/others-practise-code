#include <stdio.h>
#include<stdlib.h>
// function prototype
void matrixMultiply(int row1, int cols1, int row2, int cols2, int matrixA[row1][cols1], int matrixB[row2][cols2], int result[row1][cols2]);
// function
void matrixMultiply(int row1, int cols1, int row2, int cols2, int matrixA[row1][cols1], int matrixB[row2][cols2], int result[row1][cols2])
{

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }

            // sum+= matrixA[i][j] * matrixB[j][i];

            //    sum+= matrixA[i][j] * matrixB[j];
        }

        printf("\n");
    }
}

int main()
{
    int row1;
    int cols1;
    // user prompt the value
    printf("give the value of rows and cols for matrix A separated by comma:");
    scanf("%d%d", &row1, &cols1);
    // populate the value of row1 in cols2
    // populate the value of cols1 in row2
    int row2 = cols1;
    int cols2 = row1;
    printf("The number of rows and columns for matrixB: %d,%d", row2, cols2);
    // matrices who will multiply to each other
    int matrixA[row1][cols1];
    int matrixB[row2][cols2];

    // populate the matrix with user value
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter value for index of matrixA %d and %d: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("MatrixA:\n");
    // display the matrices
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    // populate the matrixB with user given value
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter value for index of matrixB %d and %d: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    printf("MatrixB:\n");
    // display the matrixB value
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }
    int result[row1][cols2];
    matrixMultiply(row1, cols1, row2, cols2, matrixA, matrixB, result);
    printf("Result after multiplying two matrices with each other:\n");
    // display result
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}