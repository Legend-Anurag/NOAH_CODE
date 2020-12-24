'''
Your local library needs your help! Given the expected and actual return dates for a library book,
create a program that calculates the fine (if any). 

The fee structure is as follows:
If the book is returned on or before the expected return date, no fine will be charged 
(i.e.: fine=0)
If the book is returned after the expected return day but still within the same calendar 
month and year as the expected return date, fine=15Hackos*(Number of days late)
If the book is returned after the expected return month but still within the same calendar year 
as the expected return date, the fine=500*(number of months late)
If the book is returned after the calendar year in which it was expected, there is a fixed 
fine of 10000Hackos
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
Da,Ma,Ya=map(int, input().split())
De,Me,Ye=map(int, input().split())
result=0

if Ye==Ya:
    if Me==Ma:

        if De<Da:
            result=15*(Da-De)

    elif Me<Ma:
        M=Ma-Me
        result=500*(M)

elif Ye<Ya:
    result=10000
    
print(result)
