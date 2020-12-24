# Enter your code here. Read input from STDIN. Print output to STDOUT

#Taking input from the user(runtime)
N=int(input())

#initialization of factorial variable
factorial=1

#For calculating each succesive products
#And storing the result in factorial variable
for i in range(1,N+1):
    factorial*=i
print(factorial)