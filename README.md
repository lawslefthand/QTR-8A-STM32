# QTR-8A Sensor Driver for STM32 F030R8

This repository contains a driver for the QTR-8A reflectance sensor array, designed to work with the STM32 F030R8 microcontroller. The driver utilizes the ADC to measure the analog output from each sensor in the array, converting it into readable data for use in applications like line-following robots or surface detection systems.

## Features
- **ADC-Based Measurement**: The QTR-8A sensor array outputs analog signals that are read using the STM32's ADC. Each sensor's value is sampled, providing precise reflectance readings.
- **Configurable Access**: Sensor readings are stored in accessible variables within the `qtr_8a.c` file, making it easy to integrate with your main application.
- **Modular Design**: The driver is designed to be modular and can be easily extended or adapted for use with other STM32 microcontrollers.

## Files
- `qtr_8a.c`: Contains the main driver code, ADC initialization, and functions for reading the sensor values.
- `qtr_8a.h`: Provides the necessary function prototypes and definitions for interacting with the driver.

## Usage
1. Include the `qtr_8a.h` header in your project.
2. Use the functions provided to initialize the ADC and read sensor values from the QTR-8A array.
3. The storage variables containing sensor readings can be accessed directly from `qtr_8a.c`.
4. Example code in main.c.

## License
This project is open-source and available under the MIT License.
