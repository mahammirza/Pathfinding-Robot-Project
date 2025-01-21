# Pathfinding-Robot-Project 🤖🚀
The Pathfinding Robot uses an ultrasonic sensor to detect obstacles and adjust its movement in real-time. If something gets too close, it stops, turns, and reroutes. Powered by Arduino and DC motors, it moves forward when clear and slows down when needed. It also outputs distance data to the serial monitor, making navigation smart and efficient. 🤖

# How Does it Work? 
The robot sends ultrasonic pulses, which bounce off objects and return to the sensor. Based on the time it takes for the signal to return, it calculates how far away an obstacle is.

1. If something is closer than 15 cm, the robot stops and turns to avoid it.
2. If it’s clear ahead, it moves forward.
3. If the path is wide open (20 cm+ away), the motors slow down to prevent hiccups.

# Cool Features
- Real-time distance tracking with an ultrasonic sensor.
- Smart movement control that adjusts based on surroundings.
- Automatic obstacle avoidance with live course correction.
- Live data output through serial communication.

This project is a fun dive into robotics, embedded systems, and real-time navigation, setting the stage for more advanced autonomous bots! 🤖🚀
