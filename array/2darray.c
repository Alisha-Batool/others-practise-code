#include<stdio.h>
#include<stdlib.h>
void demo2Darray(){
    int rows, cols;
    printf("Enter the order of matrix separated by comma:");
    scanf("%d,%d",&rows,&cols);
    int matrix[rows][cols];
    //populate the mateix with user provided values
    //outer for loop select the row (inner array)
    // inner for loop select the cols (slot within array)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value for index %d & %d: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d  ", matrix[i][j]);
        }
          printf("\n");
    }    
}
int main()
{
    demo2Darray();
    return 0;
}