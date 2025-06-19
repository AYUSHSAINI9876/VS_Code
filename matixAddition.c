#include <stdio.h>

int main()
{
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows (1 to 10): ");    
    scanf("%d", &rows);
    printf("Enter the number of columns (1 to 10): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) 
    {
        printf("Invalid dimensions. Dimensions should be between 1 and 10.\n");
        return 1;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }    

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        { 
            scanf("%d", &matrix2[i][j]); 
        }
    }

    // Calculate the sum of the matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Matrix Addition Result:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
