def print_formatted(number):
    # your code goes here
    for i in range(1,number+1):
        print("{} {} {} {}".format(i,str(oct(i))[2:],str(hex(i))[2:],str(bin(i))[2:]))
    

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
'''
n=int(input()) 
width = len("{0:b}".format(n)) 
for num in range(1,n+1):
    print ('  '.join(map(str,(num,oct(num).replace('0o',''),hex(num).replace('0x',''),bin(num).replace('0b','')))))
    '''