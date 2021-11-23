#include<stdio.h>
#include<math.h>
#include "my_mat.h"

#define MAXROW      10
#define MAXCOL      10


void scanMatrix(int matrix[MAXROW][MAXCOL]){
    int i,j,r,c;
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    printf("\nMatrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");   /*new line after row elements*/
    }
}
int isExistsPath(){
    return 1;
}



int shortestPath2V(int matrix[MAXROW][MAXCOL],int v1,int v2){
    for(int k = 0; k<10; k++){
        for (int i = 0; i<10; i++){
            for (int j = 0; j<10; j++){
                if(matrix[i][k]!=0&&matrix[k][j]!=0)
                {
                     if(matrix[i][j] > matrix[i][k]+matrix[k][j]);
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
    if (matrix[v1][v2] == 0){
        return -1;
    return matrix[v1][v2];
}
int shortestPath(int matrix[MAXROW][MAXCOL])
{
    int v1,v2;
    scanf("%d", v1);
    scanf("%d", v2);
    return shortestPath2V(matrix,v1,v2);
}
