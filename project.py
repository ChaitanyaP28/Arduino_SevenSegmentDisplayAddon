#IMPORTING LIBRARIES
import time
import serial

#CONNECTING ARDUINO
#set port as ur arduino connected port
arduino = serial.Serial(port='COM4', baudrate=115200, timeout=.1)
def write_read(x):
    arduino.write(bytes(x,'utf-8'))
    data = arduino.readline()

while(1):
    no=input("Enter a number : ")
    try:
        if int(no)>10:
            print("Number should be less than 10")
            no='10'
        else:
            print("Sent : ",no)
    #HANDLING EXCEPTION CASES : (when char or string is typed)
    except:
        print("Enter only numbers")
        no='10'
    #SENDING DATA TO ARDUINO
    value = write_read(str(no))    
    print("please wait...\n")
    time.sleep(0.9)
