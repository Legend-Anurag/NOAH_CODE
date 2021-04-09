/*
A cube having a side of 6 cm is painted red on all the faces and then cut into smaller cubes 
of 1 cm each. 
Write a program to find the total number of smaller cubes so obtained.
*/

//Code for P2
#include <stdio.h>
int main()
{
   int side_of_cube,cut_into,new_side,number_of_cubes;
   printf("side of painted cube: ");
   scanf("%d",&side_of_cube);

   printf("side of cube to cut into: ");
   scanf("%d",&cut_into);

   new_side = side_of_cube/cut_into;
   number_of_cubes = new_side*new_side*new_side;

   printf("Number of smaller cubes generated= ");
   printf("%d",number_of_cubes);

   return 0;
}