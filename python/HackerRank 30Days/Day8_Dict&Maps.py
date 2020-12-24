#Number of entries for dictionary
n=int(input())
queries=0
#Variable for indexing in dictionary
grbg=0

#Object for storing all the entries
phone_book={}

#Making the loop run for each entries
for i in range(0,n):
    val=str(input())
    spl=val.split(" ")
    #store the user input in phone_book dictionary
    phone_book[spl[grbg]]=spl[grbg+1]

  
#Retrieve the key value according to the user wish
while queries<n:
    try:
        key=str(input())
        #checking the user input exists or not
        if key in phone_book:
            print("{}={}".format(key,phone_book[key]))
        else:
            print("Not found")
    except EOFError:
        break
    queries+=1