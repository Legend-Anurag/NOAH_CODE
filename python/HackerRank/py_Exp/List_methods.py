if __name__ == '__main__':
    N = int(input())
    lst=[]
    for _ in range(N):
        cmd=input()
        if cmd=="print":
            print(lst)
        
        elif cmd=="reverse":
            lst.reverse()
        elif cmd=="sort":
            lst.sort()
        elif cmd=="pop":
            lst.pop()
        
        else:
            try:
                name, val1, val2=map(str, cmd.split())
                val1=int(val1)
                val2=int(val2)
                if name=="insert":
                    lst.insert(val1, val2)
            except:
                name, val1=map(str, cmd.split())
                val1=int(val1)
                if name=="append":
                    lst.append(val1)
                elif name=="remove":
                    lst.remove(val1)

            