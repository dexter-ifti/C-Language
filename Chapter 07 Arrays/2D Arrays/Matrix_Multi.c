#include <stdio.h>

void get_element(int[][10], int, int);
void multiply_matrix(int[][10], int[][10], int[][10], int, int, int, int);
void display(int[][10], int, int);

int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;

    printf("Enter the Column and Row of the First Matrix : \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the Column and Row of the Second Matrix : \n");
    scanf("%d%d", &r2, &c2);

    while (r2 != c1)
    {
        printf("Error !\nEnter the row and Columns again : \n");
        printf("Enter the Column and Row of the First Matrix : \n");
        scanf("%d%d", &r1, &c1);
        printf("Enter the Column and Row of the Second Matrix : \n");
        scanf("%d%d", &r2, &c2);
    }

     // get elements of the first matrix
    get_element(first,  r1,  c1);
     // get elements of the second matrix
    get_element(second,  r2,  c2);

    // multiply two matrices
    multiply_matrix(first, second, result, r1, c1, r2, c2);


    // DIsplay the Result
    display(result, r1, c2);


    return 0;
}

void get_element(int arr[][10], int row, int col)
{
    printf("Enter the matrix : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void multiply_matrix(int first[][10], int second[][10], int result[][10], int row1, int col1, int row2, int col2)
{
    int sum = 0;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
}

void display(int result[][10], int row, int col)
{
    printf("The multiplication is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
}
