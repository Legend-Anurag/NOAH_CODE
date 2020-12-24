#Given a string,S, of length N that is indexed from 0 to N-1
#Print its even-indexed and odd-indexed characters as  space-separated strings on a single line 


if __name__ == '__main__':
    N=int(input())
    for i in range(0,N):
        S=input()
        str1=""
        str2=""
        for j in range(len(S)):
            if j%2==0:
                str1+=S[j]
            else:
                str2+=S[j]
        print(str1,str2)
