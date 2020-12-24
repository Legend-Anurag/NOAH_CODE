'''The concept I used here to implement the program is:
As observing, the facing seat of the input seat is always either
increment by 12 or decrement by 12.
'''

def facing_seat(T):
    while (T>0):
        #Taking the seat input
        N = int(input())
        N = N + 2 *(6-(N-1)%12)-1
        
        #Condition for Window seat
        if(N % 6 < 2 ):
            val = N
            print(str(val)+" "+"WS")
            
        #Condition for Middle seat
        elif(N % 6 == 2 or N % 6 == 5):
            val = N
            print(str(val)+" "+"MS")
        
        #Condition for Aisle seat
        else:
            val = N
            print(str(val)+" "+"AS")
        T-=1

if __name__ == "__main__":
    T = int(input())
    facing_seat(T)