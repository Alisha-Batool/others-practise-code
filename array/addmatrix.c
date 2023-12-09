#include<stdio.h>
#include<stdlib.h>
#define cols 2
void addMatrix(int matrix1[][cols],int matrix2[][cols],int result[][cols]){
    int row=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j]= matrix1[i][j] + matrix2[i][j];
        }
       printf("\n"); 
    }
    
}
void displaymatrix(int matrix[][cols]){
    int row;
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
    int row;
    int matrix1[][cols]={{1,2},{3,4},{5,6}};
    int matrix2[][cols]={{7,8},{9,0},{1,2}};
    int result[row][cols];
    addMatrix(matrix1,matrix2,result);
    displaymatrix(result);
    return 0;
}