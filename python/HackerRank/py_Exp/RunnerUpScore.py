#Print the second-last runner-up

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    
        
    lst=[]
    for i in arr:
        lst.append(i)

    print(sorted(set(lst))[-2])
