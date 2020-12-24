"""
 Sahil is in the mood to attend Geeks Classes. He reaches venue of Geeks Classess. 
Now, he is confused about his sitting place. 
There are two columns of students sitting in the classes.
Each student has been assigned a score on the basis of their score in 
Geeks Class Entrance Contest. 

Now, he wants to sit in the row which contains students with maximum score. 
Help him in finding the desired column.
"""

for T in range(int(input())):
    col1, col2=map(int, input().split())
    print(col1, col2)

    col1_val=list(map(int, input().split()))
    print(col1_val)
    sum1=sum(col1_val)
    print(sum1)

    col2_val=list(map(int, input().split()))
    print(col2_val)
    sum2=sum(col2_val)
    print(sum2)

    if sum1>sum2:
        print("C1")
    else:
        print("C2")
        


