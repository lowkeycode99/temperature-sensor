Company Name: CODTECH IT SOLUTIONS INTERN ID: CT06DG486 DOMAIN: EMBEDDED SYSTEMS DURATION: 6 weeks MENTOR: NEELA SANTOSH
This project is a **Temperature Sensor System** designed and simulated using Wokwi, an online simulation platform for Arduino and ESP32-based projects. The goal is to measure ambient temperature using a sensor and display the temperature value on the Serial Monitor in real time.

# Overview
In this project, a temperature sensor (for example, an LM35 or a simulated analog temperature sensor) is used to measure the surrounding temperature. The sensor outputs an analog voltage that is proportional to the temperature. The microcontroller (ESP32 or Arduino Uno) reads this analog voltage from an analog input pin and converts it into a temperature value in degrees Celsius using simple calculations.  
The temperature value is continuously sent to the Serial Monitor, allowing the user to view live temperature updates without needing an external display.  

# Simulation Platform
The entire project is simulated on **Wokwi**, a powerful and easy-to-use online simulator. Wokwi enables you to design circuits, write code, and see live output as if using real hardware — all in a web browser.  

# Applications
- **Weather monitoring systems**: Measure and display ambient temperature indoors or outdoors.
- **Greenhouse monitoring**: Track temperature conditions for plants.
- **Industrial temperature monitoring**: Check equipment or environment temperature.
- **Home automation systems**: Use as a basic building block for smart thermostats.

# Educational Importance
- Analog sensor interfacing with microcontrollers.
- Converting analog voltage readings into meaningful physical values (like temperature).
- Serial communication using Serial Monitor for live data display and debugging.
- Basic data logging and real-time monitoring concepts.

# Possible Extensions
- Add an LCD or OLED display to show temperature on hardware.
- Control a fan or heater automatically based on temperature thresholds.
- Add data logging capability to store temperature data over time.
- Include additional environmental sensors like humidity or light sensors.
- Connect to IoT platforms to monitor temperature remotely via Wi-Fi.

# How it works
- The temperature sensor outputs an analog voltage proportional to the temperature.
- The microcontroller reads this analog voltage using the analog-to-digital converter (ADC).
- The voltage is converted into a temperature value using a conversion formula.
- The temperature value is printed to the Serial Monitor continuously.

# Output
![Image](https://github.com/user-attachments/assets/bd2e70c5-4f49-46b1-ad76-d4eddb24e783)


# Conclusion
The Temperature Sensor project simulated on Wokwi is a simple yet powerful introduction to working with analog sensors and microcontrollers. It demonstrates fundamental skills required for building weather stations, smart home systems, or any embedded system involving environmental monitoring. By using only the Serial Monitor for display, it also teaches the importance of serial debugging and live data observation.
