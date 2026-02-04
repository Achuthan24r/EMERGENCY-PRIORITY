# EMERGENCY-PRIORITY
Smart Traffic Signal with Emergency Vehicle Priority

Method: RFID or Button (for hackathon demo)

I’ll use a button to simulate an ambulance (judges accept this 👍).

🔌 UPDATED PIN CONNECTIONS
IR Sensors
Lane	Pin
Lane 1	D2
Lane 2	D3
Lane 3	D4
Lane 4	D5
Traffic Lights
Light	Pin
Red	D8
Yellow	D9
Green	D10
Emergency Button
Component	Pin
Emergency Switch	D6
🚦 Smart Traffic Signal Control System with Emergency Vehicle Priority

An intelligent traffic management system using Arduino that dynamically controls traffic signals based on vehicle density and gives top priority to emergency vehicles such as ambulances and fire trucks.

📌 Problem Statement

Conventional traffic signals operate on fixed time intervals, which leads to:

Heavy traffic congestion

Increased waiting time

Delays for emergency vehicles

This can result in loss of lives during emergencies.

💡 Solution

This project introduces a smart traffic signal system that:

Detects real-time vehicle density

Adjusts signal timing dynamically

Instantly clears traffic for emergency vehicles

Improves traffic flow and safety

🚀 Features

🚗 Vehicle density detection using IR sensors

⏱️ Dynamic green signal timing

🚑 Emergency vehicle priority override

🚦 Automatic traffic signal control

🌍 Smart city ready solution

⚡ Low-cost and scalable design

🧠 System Working

IR sensors detect vehicle density in each lane

Green signal time is adjusted based on traffic load

Normal traffic operates automatically

Emergency signal is triggered (button/RFID)

Traffic light instantly turns green for emergency lane

System returns to normal mode after emergency

🔧 Hardware Components

Arduino UNO

IR Sensors (Vehicle Detection)

Traffic Light LEDs (Red, Yellow, Green)

Emergency Button (or RFID Module)

Resistors

Breadboard

Jumper Wires

Power Supply
