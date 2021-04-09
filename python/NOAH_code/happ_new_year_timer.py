import os
import time
import myNumbers

#Initialise settings
start=10
message=">      Happy New Year!      <"

#Start the countdown
for counter in range(start,0,-1):
    if counter==10:
      myNumbers.ten()
    elif counter==9:
      myNumbers.nine()
    elif counter==8:
      myNumbers.eight()
    elif counter==7:
      myNumbers.seven()
    elif counter==6:
      myNumbers.six()
    elif counter==5:
      myNumbers.five()
    elif counter==4:
      myNumbers.four()
    elif counter==3:
      myNumbers.three()
    elif counter==2:
      myNumbers.two()
    elif counter==1:
      myNumbers.one()
    time.sleep(1)
    os.system('clear')  

#Display the message  
print("v^v^v^v^v^v^v^v^v^v^v^v^v^v^v")
print("<                           >")
print(message)
print("<                           >")
print("v^v^v^v^v^v^v^v^v^v^v^v^v^v^v")