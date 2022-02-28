## Introduction
A temperature sensor is a device, usually a thermocouple or a resistance temperature detector, that uses an electrical signal to deliver temperature measurement in a readable form. A thermometer is the most basic type of temperature metre, and it is used to determine how hot or cold something is. In the geotechnical profession, temperature metres are used to monitor concrete, structures, soil, water, bridges, and other structures for structural changes caused by seasonal variations. A thermocouple (T/C) is a device made up of two dissimilar metals that generate an electrical voltage that is proportional to temperature change. An RTD (Resistance Temperature Detector) is a variable resistor that changes its electrical resistance in a precise, repeatable, and almost linear manner in direct proportion to the change in temperature.
## Working of Temperature Sensor
The basic principle of working of the temperature sensors is the voltage across the diode terminals. If the voltage increases, the temperature also rises, followed by a voltage drop between the transistor terminals of base and emitter in a diode.
## Components Required
### LM35
-   LM35 is an integrated analog temperature sensor whose electrical output is proportional to Degree Centigrade. LM35 Sensor does not require any external calibration or trimming to provide typical accuracies. The LM35’s low output impedance, linear output, and precise inherent calibration make interfacing to readout or control circuitry especially easy.
-   Features of LM35: Calibrated directly in Degree Celsius, 0.5°C accuracy guarantee-able, Suitable for remote applications, Low cost due to wafer-level trimming, Operates from 4 to 30 volts, Less than 60 mA current drain.
### ATmega16
-   ATmega16 microcontroller which comes under Atmel’s Advanced Virtual RISC family. It has an advanced RISC (Reduced Instruction Set Computing) system and a high-performance microcontroller. This is the advanced version of the 8051 microcontrollers which has the features beat the 8051 microcontroller features. It’s a computer inbuilt with CPU, RAM, ROM, EEPROM, Timers, Counters, ADC and last four 8 bit ports like port A, port B, port C, port D. Each port has 8 input and output pins for extra performance.
-   Features of ATmega16: 8-bit microcontroller, Memory, Two 8 bit timer/counter and One 16 bit timer/counter, ATmega16 has Four PWM Channels, Programmable USART, Special Microcontrollers Features, I/O and Packages, Operating Voltage, Power Consumption.
-   [PIN Diagram](https://user-images.githubusercontent.com/98877997/155838794-f4a17a6f-b8de-4350-853c-3708c8c45e5f.jpg)
### LCD 16*2
-   An electronic device that is used to display data and the message is known as LCD 16×2. As the name suggests, it includes 16 Columns & 2 Rows so it can display 32 characters (16×2=32) in total & every character will be made with 5×8 (40) Pixel Dots.
-   Specifications of LCD 16X2: operating voltage of this display ranges from 4.7V to 5.3V, operating current is 1mA without a backlight, HD47780 controller, works in 4-bit and 8-bit modes
### Reset Switch
-   The reset button allows devices that utilize it, such as a computer or peripheral to be rebooted.
### Resistor
-   The main purpose of resistor is to reduce the current flow and to lower the voltage in any particular portion of the circuit.
### Voltage
-   Voltage is the pressure from an electrical circuit's power source that pushes charged electrons (current) through a conducting loop, enabling them to do work such as illuminating a light.
### Using LM35 to Calculate the Temperature
-   Start by building the circuit. 
-   In the circuit, ensure you connect GND to the ground, then power LM35 VCC with +5 operating voltage (Vs). 
-   Thirdly, connect the VOUT to an ADC input (Analog-to-Digital Converter). After which you proceed by sampling the reading from ADC of the output voltage (VOUT). 
-   Finally, finish by converting the output voltage to temperature.   
## Circuit Diagram
![ATmega16 LM35 Interface](https://user-images.githubusercontent.com/98877997/155834375-372f961a-6834-4faa-831c-3699c88823ee.png)
## 4W's 1-H
## SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|Easy to use|Sensors sometime not work properly|High sale|Sometimes there is a problem with the machine|
|Reliable|High Voltage then short circuit|Affordable to all|Competitive market|
|Low cost|Not rough and tough|Everyone uses it|Lack of knowledge|
|Easy to handle|No Long Life|Every project must maintain temperature|Least sensitivity|
## High Level Requirement
|ID|Description|
|:--:|:--:|
|HLR01|Accurate Temperature Detection|
|HLR02|As the voltage rises, so does the temperature|
|HLR03|Temperature conversion from output voltage|
|HLR04|Operates easily|
## Low Level Requirement
|ID|Description|
|:--:|:--:|
|LLR01|LM35 function properly|
|LLR02| Microcontroller operation and connections|
|LLR03|Supplied voltage to the circuit|
|LLR04|LCD display result|
