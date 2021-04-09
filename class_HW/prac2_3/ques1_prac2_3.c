/*  
Sonali joined a social networking site to stay in touch with her friends. 
The signup page required her to input a name and a password. 
However, the password must be strong. 
The website considers a password to be strong if it satisfies the following criteria:
Its length is at least 6.
It contains at least one digit. 
It contains at least one lowercase English character. 
It contains at least one uppercase English character. 
It contains at least one special character. The special characters are: !@#$%^&*()-+ 
She typed a random string of length n in the password field but wasn't sure if it was strong. 
Given the string she typed, can you find the minimum number of characters she must add 
to make her password strong?
*/

/* Code for P1*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int i, l, d=0, lc=0, uc=0,s=0, count=0; 
    printf("Enter string : \n"); 
    scanf("%[^\n]s",str); 
    l=strlen(str);
    
    for(i=0;i<l;i++)
    {
        if(!isdigit(str[i])) 
            d+=1;
        if(!islower(str[i])) 
            lc+=1;
        if(!isupper(str[i])) 
            uc+=1;
        if(!(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' ||str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+')) 
            s+=1;
    }
    if(d==l) 
        count+=1;
    if(lc==l) 
        count+=1;
    if(uc==l) 
        count+=1;
    if(s==l) 
        count+=1;
    if(count>6-l) 
        printf("Password is strong with %d number of characters",l);
    else
        printf("Number of characters needs to be added are: %d",6-l); 
    return 0;
}
