import RPi.GPIO as GPIO
import time

def setupRasbperry():
GPIO.setmode(GPIO.BOARD)
GPIO.setup(2, GPIO.OUT)


if __name__ == "__main__":
    while (True):
        setupRasbperry()
	GPIO.output(2, True)
	time.sleep(20)
	GPIO.output(2, False)
	time.sleep(25)


