#include "BluetoothSerial.h"  // Bluetooth library for ESP32
#include <Dabble.h>            // Include Dabble library

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to enable it.
#endif

#if !defined(CONFIG_BT_SPP_ENABLED)
#error Serial Bluetooth not available or not enabled. It is only available for the ESP32 chip.
#endif

#if !defined(CONFIG_BT_BLE_ENABLED)
#error Bluetooth Low Energy (BLE) not available or not enabled. Please run `make menuconfig` to enable BLE support.
#endif

BluetoothSerial ESP_BT;  // Create Bluetooth object
Terminal Terminal;       // Create Terminal object for Dabble library

void setup() {
  Serial.begin(9600);  
  ESP_BT.begin("ESP32_Dabble");  

  // Set Bluetooth PIN for pairing security
  ESP_BT.setPin("1234");  

  Dabble.begin(ESP_BT);  

  Serial.println("Bluetooth is ready. Connect using Dabble app.");
}

void loop() {
  Dabble.processInput();  

  // Check if a message is received from the Terminal module
  if (Terminal.available()) {
    String message = Terminal.readString();  

    Serial.print("Received from phone: ");
    Serial.println(message);

    // Send a reply back to the mobile phone via Terminal
    Terminal.println("ESP32: Message received - " + message);
  }

  // Check if Bluetooth is still connected
  if (!ESP_BT.hasClient()) {
    Serial.println("Waiting for Bluetooth connection...");
    delay(1000);
  }

  delay(500);
}
