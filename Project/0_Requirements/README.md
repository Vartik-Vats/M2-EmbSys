## Introduction
A temperature sensor is a device, usually a thermocouple or a resistance temperature detector, that uses an electrical signal to deliver temperature measurement in a readable form. A thermometer is the most basic type of temperature metre, and it is used to determine how hot or cold something is. In the geotechnical profession, temperature metres are used to monitor concrete, structures, soil, water, bridges, and other structures for structural changes caused by seasonal variations. A thermocouple (T/C) is a device made up of two dissimilar metals that generate an electrical voltage that is proportional to temperature change. An RTD (Resistance Temperature Detector) is a variable resistor that changes its electrical resistance in a precise, repeatable, and almost linear manner in direct proportion to the change in temperature.
## Working of Temperature Sensor
The basic principle of working of the temperature sensors is the voltage across the diode terminals. If the voltage increases, the temperature also rises, followed by a voltage drop between the transistor terminals of base and emitter in a diode.
## Components Required
-   LM35: LM35 is an integrated analog temperature sensor whose electrical output is proportional to Degree Centigrade. LM35 Sensor does not require any external calibration or trimming to provide typical accuracies. The LM35’s low output impedance, linear output, and precise inherent calibration make interfacing to readout or control circuitry especially easy.
Features of LM35: Calibrated directly in Degree Celsius, 0.5°C accuracy guarantee-able, Suitable for remote applications, Low cost due to wafer-level trimming, Operates from 4 to 30 volts, Less than 60 mA current drain.
-   ATmega16
-   LCD 16*2
-   Reset Switch
-   Resistor- 2
-   Voltage
## Using LM35 to Calculate the Temperature
-   Start by building the circuit. 
-   In the circuit, ensure you connect GND to the ground, then power LM35 VCC with +5 operating voltage (Vs). 
-   Thirdly, connect the VOUT to an ADC input (Analog-to-Digital Converter). After which you proceed by sampling the reading from ADC of the output voltage (VOUT). 
-   Finally, finish by converting the output voltage to temperature.   
## Circuit Diagram
![ATmega16 LM35 Interface](https://user-images.githubusercontent.com/98877997/155834375-372f961a-6834-4faa-831c-3699c88823ee.png)
## 4W's 1-H
|What|Where|Who|When|Why|How|

## SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|||||
|||||
|||||
|||||

## High Level Requirement
|ID|Description|
|:--:|:--:|:--:|
|HLR01||
|HLR02||
|HLR03||
|HLR04||

## Low Level Req|uirement
|ID|Description|Category|
|:--:|:--:|:--:|
|LLR01||
|LLR02||
|LLR03||
|LLR04||
