#include<stdio.h>
float avg_ht(int age[],int n); 

int main() 
{ 
    int age[30],n,i; 
    float ah; 
    printf("Enter no. of students in the class:"); 
    scanf("%d",&n); 
    
    for(i=0;i<n;i++) 
    { 
        printf("\nEnter age of student %d:",i+1); 
        scanf("%d",&age[i]); 
    } 