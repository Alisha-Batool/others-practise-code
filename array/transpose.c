#include <stdio.h>
#include <stdlib.h>
#define columns 3
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}
int main()
{
    int rows;
    int cols;
    int matrix[rows][cols]={{12,13,5},{5,7,21},{6,4,10},{5,5,9}};
    int result[cols][rows];
    transpose(rows, cols, matrix, result);
    printf("The transposed matrix is:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

