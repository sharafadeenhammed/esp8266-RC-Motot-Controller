# This code is completely free to use if you find it useful please leave a star ⭐ and if you need help contact me on my email allahsegun@gmail.com 
# esp8266-RC-Motot-Controller

## software
upload this code to your esp8266 board with 
arduino ide.
make sure you have the esp board installed on your arduino ide.

## hardware setup 
1. connect two brushed dc motor to l296n motor driver
2. connect the l296n motor driver to the esp8266 pin as below

       in1 to d1

       in2 to d2
 
       in3 to d3
 
       in4 to d4
 
4. connect a 9v power source to the vcc on the l296n driver
5. connect the 5v on the l296n driver to the vin on your esp.
6. the you should be all set to test your rc car

## control console
once esp8266 is power you should see a network named Motor Controller which is created by the esp8266 connect to the wifi network with the password 123456789, after successfully connected to the network open your browser and go to http://192.168.10.10 to show the control console.

have fun with your rc car 😊 🚀 🚀 



