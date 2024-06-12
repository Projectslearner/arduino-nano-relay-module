# Relay Module

#### Project Overview

The Relay Module project demonstrates how to use an Arduino Nano to control a relay module with a push button. Relays are used to control high-power devices such as lights, fans, and appliances from low-power microcontrollers like the Arduino. This project includes debouncing logic to ensure stable button press detection.

#### Components Needed

1. **Arduino Nano**
2. **Relay Module**
3. **Push Button**
4. **10kΩ Resistor (optional, if not using internal pull-up)**
5. **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect Relay Module to Arduino Nano:**
   - Connect the control pin of the relay module to digital pin 7 on the Arduino Nano.
   - Connect VCC and GND of the relay module to the 5V and GND pins of the Arduino Nano.

2. **Connect Push Button to Arduino Nano:**
   - Connect one end of the push button to digital pin 2 on the Arduino Nano.
   - Connect the other end of the push button to GND.
   - If not using the internal pull-up resistor, connect a 10kΩ resistor between digital pin 2 and 5V.

#### Instructions

1. **Circuit Setup:**
   - Wire the relay module and push button to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and paste the provided code.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, open the serial monitor.
   - Press the push button to toggle the relay state.
   - The relay will turn on or off, and the serial monitor will display the relay state ("ON" or "OFF").

#### Applications

- **Home Automation:** Control home appliances like lights, fans, and heaters remotely.
- **Industrial Automation:** Automate machinery and equipment using relay control.
- **Safety Systems:** Use relays to control emergency shutdown systems or alarms.

#### Notes

- Adjust the debounce time in the code to suit the response time of your push button.
- Ensure the relay module is rated for the voltage and current of the device you intend to control.
- Always be cautious when working with high-voltage devices and ensure proper insulation and safety measures.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-relay-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner