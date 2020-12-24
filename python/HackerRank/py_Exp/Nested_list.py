if __name__ == '__main__':
    #For storing names and score
    n = []
    s = []
    result=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        #appending them
        n.append(name)
        s.append(score)
    
    #We will use this to compare
    a=max(s)
    b=min(s)

    for i in range(len(n)):
        if s[i]<a and s[i]>b:
            a=s[i]
    
    #Iterating again so that if the same record exists
    for j in range(len(n)):
        if s[j]==a:
            result.append(n[j])
        
    result=sorted(result)
    for ans in result:
        print(ans)
        
    