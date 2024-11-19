import math
import string

#below line of code creates rom file called sinerom.mem 
f = open("sinerom.mem","w")

#there are 256 data values in the rom
for i in range(256):
    #values are computed using the cosine function.
    #The math.cos(2 * 3.1416 * i / 256) computes the cosine of an angle based on the index i. 
    #Since the cosine function returns values between -1 and 1, this is the output range we're working with.
    #Output range is [-1, 1], and we are going to extrapolate that to [-127, 127] by multiplying by 127.
    #We then adjust all values to be positive because we want to make sure that they fit within range of 8 bit
    #unsigned integers by adding +127. 
    v = int(math.cos(2*3.1416*i/256)*127+127) 

    #Below conditions are for definining the format of the rom.
    if (i+1)%16 == 0: 
        #after making 16 columns, it creates newline and moves to nextline 
        s = "{hex:2X}\n" 
    else: 
        #else, it will continously create new 2 digit hex values with a space in between. 
        s = "{hex:2X} " 

    #below line essentially adds 256 data values into the ROM 
    f.write(s.format(hex=v)) 

f.close()