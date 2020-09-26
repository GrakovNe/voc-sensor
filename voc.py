#!/usr/bin/python
import serial
import time
import os

port_name = "/dev/serial/by-id/usb-1a86_USB2.0-Ser_-if00-port0"
topic_name = "voc"


ser = serial.Serial(
       port=port_name,
       baudrate = 115200,
       parity=serial.PARITY_NONE,
       stopbits=serial.STOPBITS_ONE,
       bytesize=serial.EIGHTBITS,
       timeout=10
)

print "hi"

while 1:
        line = ser.readline()
        os.system('mosquitto_pub -d -t + ' topic_name ' + -m "' + line + '"')
        time.sleep(10)
