#include <stdio.h>
#include "my_mat.h"
 
#define MAXROW      10
#define MAXCOL      10
 
int main()
{
    int matrix[MAXROW][MAXCOL];
    char ch;
    printf("Enter one char");
    scanf("%c", &ch);
    while (ch!='D')
    {
        switch (ch)
        {
        case 'A':
            scanMatrix(matrix);
            break;
        case 'B':isExistsPath();
            break;
        case 'C':printf(shortestPath(matrix));
            break;
        }
        scanf("%c", &ch);
    }
    
    return 0;   
}