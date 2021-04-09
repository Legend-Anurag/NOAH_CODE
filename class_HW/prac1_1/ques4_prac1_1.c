/*
Sonu ranked mth from the top and nth from the bottom in a class. 
How many students are there in the class?
*/

//Code for P4
#include<stdio.h>
int main()
{
      int m, n, t_students;
      printf("Enter position of Sonu from top:\n");
      scanf("%d",&m);
      printf("Enter position of Sonu from bottom:\n");
      scanf("%d",&n);

      t_students=(m+n)-1;
      printf("Total number of students in the class : %d ",t_students);
      return 0;
}

