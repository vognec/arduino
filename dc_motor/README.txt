This project uses an Arduino analog output (PWM) to control speed of motor by letting user send an values between 0 and 255 from serial monitor. A transistor is used here to switch more current to motor that Arduino can not supply on its own. Diode is used here to protect arduino and transistor from negative spike of voltage.

Hardware:
	Arduino Uno
	DC Motor
	2N2222 Transistor
	Diode
