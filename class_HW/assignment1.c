/*Q6--> If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, sum, i, number, count=0, n=1;
    printf("Enter N Digit's Number: ");
    scanf("%d", &num);
    number = num;
    
    //get the counter till then we have to run the loop
    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10; //n = 10
        n = n + 1; //n = 11
    }
    sum = num + n;
    printf("Output: %d", sum);
}

*/

/*Q9---> Take a float input from the user and type cast it to int and print it on the screen.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a floating number\n");
    scanf("%d",&num);
    printf("%d",num);
    return 0;
}
*/

/*Q8---> Write a program to read a character in upper case and print it in lower case.

#include<stdio.h>
#include<conio.h>
int main()
{
    char upperChar, lowerChar;
    int ascii;
    printf("Enter an uppercase Character: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("\nIts Lowercase = %c", lowerChar);
    getch();
    return 0;
}
*/

/*Write a program to input a three digit number and print the digit at 1’s place, 
100’s place and 1000’s place one by one separated by a single line.

#include<stdio.h>
int main()
{
    int n;
    
    printf( "Input a three digit number: " );
    scanf("%d", &n);
    printf( "\nOutput: " );

    printf("\n%d", (n/100));
    n = n - ((n/100)*100);
    
    printf("\n%d", (n/10));
    n = n - ((n/10)*10);  
    
    printf("\n%d\n", (n%10));
    return 0;
}
*/

/*Write a program to find maximum of three numbers without using if statement.
#include <stdio.h> 
  
int main() 
{ 
    int A, B, C; 
  
    printf("Enter the numbers A, B and C: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    if (A >= B && A >= C) 
        printf("%d is the largest number.", A); 
  
    if (B >= A && B >= C) 
        printf("%d is the largest number.", B); 
  
    if (C >= A && C >= B) 
        printf("%d is the largest number.", C); 
  
    return 0; 
}

//USING TERNARY OPERATOR
#include <stdio.h> 
int main() 
{ 
    int A, B, C, largest; 
  
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    largest = A > B ? (A > C ? A : C) : (B > C ? B : C); 
  
    printf("%d is the largest number.", largest); 
  
    return 0; 
} 
*/

/*Write a program to input following details of a under-graduate student
Name (string)
Age (integer)
Contact number (long long integer)
Percentage in metric class (float / double)

#include<stdio.h>
int main()
{
    char Name[20];
    int age;
    float perc;
    long contact_num;

    printf("Enter name: ");
    scanf("%s", &Name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter contact number: ");
    scanf("%lld", &contact_num);

    printf("Enter percentage: ");
    scanf("%f", &perc);

    printf("\nThank you. Your data has been saved in our system.");
    printf("\nName =%s", Name);
    printf("\nAge =%d", age);
    printf("\nContact number= %lld",contact_num);
    printf("\nPercentage = %.2f",perc);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int day, year;
    char weekday[20], month[20], dtm[100];
    strcpy( dtm, "Saturday March 25 1989" );
    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

    printf("%s %d, %d = %s\n", month, day, year, weekday );
    printf("Here the weekday is: ");
    puts(weekday);

    //Let's try to change the year 
    printf("\nTrying sprintf()");   
    printf("\nEnter the year: ");
    scanf("%d",&year);
    sprintf(dtm, "%s %s %d %d", weekday, month, day, year );
    printf("\n\n After changing the year to 2021:");
    printf("\n%s", dtm);
    
    return(0);
}