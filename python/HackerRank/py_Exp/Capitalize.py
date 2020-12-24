def solve(s):
    a=list(map(str, s.split()))
    for i in range(len(a)):
        a[i]=a[i].capitalize()
    print(a)
    s=' '.join(a)
    return s


string=solve(input())
print(string)