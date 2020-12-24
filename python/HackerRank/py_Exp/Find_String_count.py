'''
In this challenge, the user enters a string and a substring. 
You have to print the number of times that the substring occurs in the given string. 
String traversal will take place from left to right, not from right to left.

NOTE: String letters are case-sensitive.
'''

def count_substring(string, sub_string):
    occurence=0
    a=0
    for _ in range(len(string)):
        try:
            a=string.find(sub_string)
            if a==-1:
                break
            string=string[a+1:]
            occurence+=1
            print(string)
        except:
            break
    return occurence

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)