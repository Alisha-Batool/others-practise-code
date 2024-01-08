#include <stdio.h>
#include <stdlib.h>
#define rows 4
#define cols 3
void transpose( int matrix[rows][cols], int result[cols][rows]);
void transpose( int matrix[rows][cols], int result[cols][rows])
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
    
    int matrix[rows][cols]={{12,13,5},{5,7,21},{6,4,10},{5,5,9}};
    printf("Before the transpose:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int result[cols][rows];
    transpose( matrix, result);
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

