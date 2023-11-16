This project uses a shift register to control 8 leds with only 3 pins on the arduino. The shiftWrite() function has a byte named "data" that holds the data that will get shifted to the shifted register. The bitWrite() function modifies the specified bit "desiredPin" of the "data" variable to HIGH or LOW. The shiftOut() function sends the byte "data" to the shift register, witht he MSB first. The digitalWrite() function is used to latch the data into the shift register and then it is set to LOW to get ready for next set of data.

Hardware:
	Arduino Uno
	LED x8
	Shift Register 74HC595
