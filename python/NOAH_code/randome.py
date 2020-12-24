
days=["monday","tuesday","wednesday","thursday","friday","saturday","sunday"]
#For number of test cases T
for T in range(int(input("Number of test cases: "))):
    #size of the book
    n=int(input("Size of the book: "))
    pages_read=list(map(int, input().split()))
    sum=0
    count=0
    for i in range(len(pages_read)):
        sum+=pages_read[i]
        count+=1
        if sum>=n:
            break

    while sum<=0:
        for i in range(len(pages_read)):
            sum+=pages_read[i]
            count+=1
            if sum>=n:
                break

    print(count,days[count-1])

