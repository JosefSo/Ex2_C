#include<stdio.h>
#include<math.h>
#include "my_mat.h"

typedef enum { false, true } boolean;

#define MIN(a,b) (((a)<(b))?(a):(b))

#define INFINITY HUGE_VALF

#define ROWS 10
#define COLS 10


/**
 * Function to take input in two dimensional array (matrix) 
 * from user.
 *
 * @matrix  2D array to store input.
 * @rows    Total rows in 2D matrix.
 * @cols    Total columns in 2D matrix.
 */
void scanMatrix(int matrix[][10]){

    int i, j;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
            scanf("%d", (*(matrix + i) + j));
            if (i != j && matrix[i][j] == 0){
                matrix[i][j] == INFINITY;
            }

        }
    }

}

int isExistsPath(int v1, int v2, int matrix[][10]){
    int ans = shortestPath(v1, v2, matrix)
    if (ans == -1){
        return 0;
    }
    return 1;
}

int shortestPath(int p1, int p2, int matrix[][COLS]){
    for(int k = 0; k<10; k++){
        for (int i = 0; i<10; i++){
            for (int j = 0; j<10; j++){
                matrix[i][j] = MIN(matrix[i][j], matrix[i][k]+matrix[k][j]);
                matrix[j][i] = matrix[i][j];
            }
        }
    }
    if (matrix[p1][p2] == INFINITY){
        return -1;
    }
    return matrix[p1][p2];
}

int main()
{
    int matrix[10][10];
    int i, j;

    /* Input elements in matrix */
    printf("Enter elements in %dx%d matrix.\n", 10, 10);
    scanMatrix(matrix, 10, 10);


    /* Print elements in matrix */
    printf("Elements of %dx%d matrix.\n", 10, 10);
    printMatrix(matrix, 10, 10);


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
void printMatrix(int (*matrix)[10], int rows, int cols)
{
    int i, j;


    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}