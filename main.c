#include <stdio.h>
int main()
{
    int i,j,row,column;

    printf("Enter number of Rows :");
    scanf("%d",&row);

    printf("Enter number of Columns :");
    scanf("%d",&column);

    int matrix[row][column];

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Enter the element at row-%d, column-%d: ", i+1, j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix is:\n\n");

   for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }



    int n_steps_to_right, n_steps_to_up, n_steps_to_down;
    int total_num_of_steps_A, total_num_of_steps_B;

    n_steps_to_right = column - 1;

    n_steps_to_up = row - 1;

    n_steps_to_down = row - 1;

    total_num_of_steps_A = (n_steps_to_right + n_steps_to_down) - 1 ;
    total_num_of_steps_B =  (n_steps_to_right + n_steps_to_up) - 1 ;

    printf("\nTotal number of steps from cell(1, 1) to cell(%d, %d) = %d\n", row, column, total_num_of_steps_A);

    printf("\nTotal number of steps from cell(%d, 1) to cell(1, %d) = %d\n", row, column, total_num_of_steps_A);






    return 0;
}
