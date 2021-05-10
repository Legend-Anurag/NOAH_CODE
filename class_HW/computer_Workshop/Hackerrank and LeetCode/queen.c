// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/n-queensrecursion-tutorial/
#include <stdio.h>

int is_attack(int i, int j, int board[5][5], int m) {
  int a, b;
  for(a=1; a<=i-1; a++) 
  {
    if(board[a][j] == 1)
    {
      return 1;
    }
  }


  a = i-1;
  b = j+1;
  while (a>=1 && b<=m) 
  {
    if (board[a][b] == 1)
    {
      return 1;
    }
    a=a+1;
    b=b+1;
  }

  a = i-1;
  b = j-1;
  while (a>=1 && b>=1) 
  {
    if (board[a][b] == 1)
    {
      return 1;
    }
    a=a-1;
    b=b-1;
  }

  return 0;
}

int n_queen(int row, int n, int m, int board[5][5]) {
  if (n==0)
  {
    return 1;
  }

  int j;
  for (j=1; j<=m; j++) {
    if(!is_attack(row, j, board, m)) 
    {
      board[row][j] = 1;

      if (n_queen(row+1, n-1, m, board))
        return 1;

      board[row][j] = 0;
    }
  }
  return 0;
}

int main() 
{
  int board[5][5];
  int i, j;

  for(i=0;i<=4;i++) 
  {
    for(j=0;j<=4;j++)
    {
      board[i][j] = 0;
    }
  }

  n_queen(1, 4, 4, board);

  for(i=1;i<=4;i++) 
  {
    for(j=1;j<=4;j++)
    {
      printf("%d\t",board[i][j]);
    }
    printf("\n");
  }
  return 0;
}