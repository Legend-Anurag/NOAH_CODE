/*
Practical 1.1: Write a program to input following details of a under-graduate student

i       Name (string)

ii      Age (integer)

iii     Contact number (long long integer)

iv     Percentage in metric class (float / double)

Your program should generate output as follows:

**************STUDENT DATABASE*******************

Enter name in capital letters: xyz pqr

Enter age                           : 18

Enter contact number        : 9876543210

Enter percentage in metric : 86.84

Thank you. Your data has been saved in our system

************************************************************
*/

//Code for P1
#include <stdio.h>
int main()
{
   char name[20];
   int age;
   long long contact_num;
   float perc;

   printf("Enter name in capital letters: ");
   scanf("%s", name);
   printf("Enter age\t\t     : ");
   scanf("%d", &age);
   
   printf("Enter contact number\t     : ");
   scanf("%lld", &contact_num);
   printf("Enter perc in metric\t     : ");
   scanf("%f", &perc);

   printf("\n*************STUDENT DATABASE*************");
   printf("\nName= %s", name);
   printf("\nAge= %d", age);
   printf("\nPhone Number= %lld", contact_num);
   printf("\nPerc= %.2f", perc);
   printf("\nThank you, Your data has been saved in our system.");
   printf("\n******************************************");

   return 0;
}