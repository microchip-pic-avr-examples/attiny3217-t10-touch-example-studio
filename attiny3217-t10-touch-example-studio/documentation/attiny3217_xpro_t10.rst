INTRODUCTION
============
This is the documentation for the Tocuh ATtiny3217 Xplained Pro with T10 Xpro.

Example description
===================
This example demonstates the basic touch application where the touch sensors are measured and the touch status is indicated using LED. The touch library parameters are also displayed in the datavisualizer software when the hardware kit is connected through edbg/medbg vritual com port.

RELATED DOCUMENTS / APPLICATION NOTES
=====================================
Refer the microchip developer page link `"Generate Atmel Board User Project" <http://microchipdeveloper.com/touch:generate-atmel-board-touch-project>`_.

SUPPORTED EVALUATION KIT
========================
	* `ATtiny3217 Xplained Pro <http://www.microchip.com/DevelopmentTools/ProductDetails/PartNo/attiny3217-xpro>`_
	* `T10 Xplained Pro Extension Kit <https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC47H23A>`_

INTERFACE SETTINGS
==================
	* RTC clock: 32KHz
	* CPU Clock Frequency: 10MHz
	* I2C for LEDs: PA2/PA1
	* Datavisualizer port pins: PB2/PB3, 38400
	* Connection: Connect T10 XPRO EXT3 to EXT1 of ATtiny3217 XPRO board.
	
RUNNING THE DEMO
================
1. Select "EXPORT PROJECT" tab and click "Download Pack" to save the .atzip file.
2. Import .atzip file into Atmel Studio 7, File->Import->Atmel Start Project.
3. Build Solution and make sure no compiler errors occur.
4. Press "Start without debugging" or use "CTRL+ALT+F5" hotkeys to run the application.
5. The LEDs glow when the touch sensor is touched. 
6. Open Atmel Data Visualizer software and set the config path to the folder that contains the datastreamer scripts. 
7. Open serial port connection and connect to the target. Verify the connection is made successfully and the touch status is displayed on the dashboard. 