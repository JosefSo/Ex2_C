#include <stdio.h>
#include "my_mat.h"


#define ROWS 10
#define COLS 10

/* Function declaration to input and print two dimensional array */
void scanMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);


int main()
{
    int matrix[ROWS][COLS];
    int i, j;

    /* Input elements in matrix */
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    scanMatrix(matrix, ROWS, COLS);


    /* Print elements in matrix */
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);


    return 0;
}


/**
 * Function to display elements of two dimensional array (matrix)
 * on console.
 *
 * @matrix  2D array to display as output.
 * @rows    Total rows in 2D matrix.
 * @cols    Total columns in 2D matrix.
 */
void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}