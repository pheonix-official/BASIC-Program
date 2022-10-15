#include <stdio.h>
#include <assert.h>

void read_matrix();
void process_matrix(float a[][10], float b[][10], int row, int col);
void show_matrix(float c[][10], int row, int col);

void read_matrix (void)
{
  float a[10][10], b[10][10];
  int m, n, p, q, i, j;

  printf("Enter the rows and columns of the first matrix: ");
  scanf("%d %d", &m, &n);
  printf("Enter the rows and columns of the second matrix: ");
  scanf("%d %d", &p, &q);

  assert("Inappropriate dimensions! " && (n == p));

  for(i = 0; i<m; ++i)
  {
    for(j = 0; j<n; ++j)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%f", &a[i][j]);
    }
  }

  printf("\n\n");

  for(i = 0; i<p; ++i)
  {
    for(j = 0; j<q; ++j)
    {
      printf("b[%d][%d] = ", i, j);
      scanf("%f", &b[i][j]);
    }
  }



  process_matrix(a, b, m, q);
}

void process_matrix(float a[][10], float b[][10], int row, int col)
{
  float c[row][10];
  int i, j, k;

  for (i = 0; i<row; ++i)
  {
    for(j = 0; j<col; ++j)
    {
      c[i][j] = 0;
      for (k = 0; k <= col; ++k)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  show_matrix (c, row, col);
}

void show_matrix(float c[][10], int row, int col)
{
  int i, j;
  printf("\nThe product of the given matrices: \n");
  for(i = 0; i< row; ++i)
  {
    for(j = 0; j <col; ++j)
    {
      printf("%g\t", c[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  read_matrix();
  return 0;
}