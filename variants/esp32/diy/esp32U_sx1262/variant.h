#pragma once

#define USE_SX1262

// SPI estándar ESP32
#define LORA_SCK   18
#define LORA_MISO  19
#define LORA_MOSI  23
#define LORA_CS     5

// Control radio
#define LORA_RESET 14
#define LORA_BUSY  27
#define LORA_DIO1  26
#define LORA_RXEN  33

// SX126x mapping
#define SX126X_CS    LORA_CS
#define SX126X_DIO1  LORA_DIO1
#define SX126X_BUSY  LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN  LORA_RXEN

#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL