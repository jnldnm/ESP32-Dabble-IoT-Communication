\# ESP32 Bluetooth with Dabble App for IoT Communication



\## Laboratory Activity



This project demonstrates the intended use of an ESP32 with Bluetooth communication through the Dabble mobile application.



\## Objective



The objective of this laboratory activity is to establish Bluetooth communication between an ESP32 and the Dabble mobile application.



The program is designed to:



\* Initialize Bluetooth on the ESP32.

\* Connect the ESP32 to the Dabble application.

\* Receive text messages through the Dabble Terminal.

\* Display received messages through the Arduino Serial Monitor.

\* Send a response from the ESP32 back to the Dabble Terminal.



\## Hardware



\* ESP32 development board

\* USB cable

\* Smartphone



\## Software



\* Arduino IDE

\* ESP32 board package

\* Dabble library by STEMpedia

\* Dabble mobile application



\## Bluetooth Configuration



\*\*Bluetooth Device Name:\*\*



`ESP32\_Dabble`



\*\*Bluetooth PIN:\*\*



`1234`



\## How the Program Works



The ESP32 initializes Bluetooth when the program starts. The Dabble library is then initialized using the ESP32 Bluetooth connection.



The program continuously checks for incoming data from the Dabble Terminal. When a message is received, it is displayed in the Arduino Serial Monitor.



The ESP32 then sends a response back to the Dabble application.



\### Communication Flow



```text

Dabble App

&#x20;    |

&#x20;    | Bluetooth

&#x20;    ↓

&#x20;  ESP32

&#x20;    |

&#x20;    | Receives message

&#x20;    ↓

Serial Monitor



ESP32

&#x20;    |

&#x20;    | Response

&#x20;    ↓

Dabble Terminal

```



\## Example Communication



Example message:



`Hello ESP32`



Expected response:



`ESP32: Message received - Hello ESP32`



\## Project Files



```text

ESP32-Dabble-IoT-Communication/

│

├── ESP32\_Dabble\_IoT/

│   └── ESP32\_Dabble\_IoT.ino

│

├── screenshots/

│   └── README.md

│

└── README.md

```



\## Notes



The Arduino sketch contains the code required for ESP32 Bluetooth communication with the Dabble application.



The project source code is provided for the laboratory activity and can be uploaded to a compatible ESP32 development board using Arduino IDE.



