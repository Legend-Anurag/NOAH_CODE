handle=open('inbox.txt')
count=0
for line in handle:
    print(line)
    count=count+1

print("Total number of line =",count)