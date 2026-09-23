# Timer Interrupt Based LED Controller

## Overview

This project demonstrates an Arduino Uno firmware application that controls an LED using a Timer1 overflow interrupt.

## Objective

The objective is to demonstrate timer-based interrupt programming in embedded firmware without using the delay() function.

## Hardware

- Arduino Uno
- Built-in LED on digital pin 13

## Software

- Arduino C/C++
- Wokwi Arduino Simulator

## Working Principle

Timer1 is configured with a prescaler of 256. When the timer overflows, the Timer1 Overflow Interrupt Service Routine (ISR) is executed. The ISR changes the LED state and reloads the timer.

The main loop remains available for other tasks because LED timing is handled by the interrupt.

## Testing

The firmware was compiled and tested using the Wokwi Arduino simulator. The simulation successfully ran and the Arduino built-in LED changed state periodically.

## Result

The Timer1 interrupt-based LED controller operated successfully in simulation without using delay().

## Author

Week 2 Firmware Development Project
