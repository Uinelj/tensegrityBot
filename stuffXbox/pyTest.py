

import serial

ser = serial.Serial('/dev/ttyACM0', 9600) #connects to the serial port (with an arduino connected)

ard=ser.readline().strip() #read from the arduino

print ard

ser.write('1') #this sends a '1' to the arduino
