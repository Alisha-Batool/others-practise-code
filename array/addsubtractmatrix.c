#include<stdio.h>
#include<stdlib.h>
#define cols 2
#define row 3
// function for addition between two matrices
void addMatrix(int matrix1[][cols],int matrix2[][cols],int result[][cols]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j]= matrix1[i][j] + matrix2[i][j];
        }
     
    }
    
}
// function for subtraction between two matrices 
void subtractMat(int matrix1[][cols], int matrix2[][cols], int result2[][cols]){
       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result2[i][j]= matrix1[i][j] - matrix2[i][j];
        }
     
    }
}
// function for display matrices value
void displaymatrix(int matrix[][cols]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    int matrix1[][cols]={{1,2},{3,4},{5,6}};
    printf("matrix1:\n");
    displaymatrix(matrix1);
    int matrix2[][cols]={{7,8},{9,0},{1,2}};
    printf("matrix2:\n");
    displaymatrix(matrix2);
    int result[row][cols];
    addMatrix(matrix1,matrix2,result);
    printf("result after add two matrices:\n");
    displaymatrix(result);
    int result2[row][cols];
    subtractMat(matrix1,matrix2,result2);
    printf("result after subtract two matrices:\n");
    displaymatrix(result2);
    return 0;
}