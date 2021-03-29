import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(2, GPIO.OUT)

while True:
   GPIO.output(2, True)
   time.sleep(20)
   GPIO.output(2, False)
   time.sleep(25)
