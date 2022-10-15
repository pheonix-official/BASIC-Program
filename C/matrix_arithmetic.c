#include <stdio.h>
// function to add two matrix
void addMatrix(int a[10][10], int b[10][10],
               int c[10][10], int row, int column)
{
  for(int i=0; i< row; ++i)
  {
    for(int j=0; j< column; ++j)
    {
      // add & store to matrix C
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}
// function to read matrix
void readMatrix(int matrix[10][10], int row, int column)
{
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < column; ++j)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
}
// function to display matrix
void displayMatrix(int matrix[10][10], int row, int column)
{
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < column; ++j)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); // new line
  }
}
// main function
int main()
{
  // declare matrix matrix A, B, & C
  int a[10][10]; // first matrix
  int b[10][10]; // second matrix
  int c[10][10]; // resultant matrix

  // read the size of matrices
  int row, column;
  printf("Enter Row and Column Sizes: ");
  scanf("%d %d", &row, &column);

  // read matrix A and B
  printf("Enter Matrix-1 Elements: \n");
  readMatrix(a, row, column);
  printf("Enter Matrix-2 Elements: \n");
  readMatrix(b, row, column);

  // add both matrix A and B
  addMatrix(a, b, c, row, column);

  // display resultant matrix
  printf("Resultant Matrix: \n");
  displayMatrix(c, row, column);

  return 0;
}
