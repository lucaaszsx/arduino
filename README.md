
# 🛠️ Arduino Projects

This repository contains multiple projects developed with **Arduino**.  
Projects are organized into **categories** (sensors, ICs, displays, etc.) for better navigation.

---

## 📂 Repository Structure

```
arduino-projects/
├── projects/
│   ├── sensors/         # Projects related to sensors
│   ├── ics/             # Projects using integrated circuits
│   ├── displays/        # Projects with LCD, OLED, and other displays
├── LICENSE
└── README.md
```

- Each **category folder** contains multiple projects.  
- Each **project folder** includes:
  - Main `.ino` file (with the same name as the folder)
  - `README.md` explaining the project
  - `assets/` for schematics, diagrams, and images

---

## 🚀 How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/lucaaszsx/arduino.git
   ```

2. Navigate to the desired project:
   - Example: `projects/sensors/dht11-temperature/dht11-temperature.ino`

3. Open the `.ino` file in [Arduino IDE](https://www.arduino.cc/en/software) or [Arduino CLI](https://arduino.github.io/arduino-cli/latest/).

4. Select the correct **board** (e.g., Arduino Uno, Nano, Mega, ESP32) and **port**.

5. Install any required libraries (listed in the project’s README).

6. Upload the code to your Arduino board.

---

## 📚 Project Categories

- **Sensors**
  - [DHT11 Temperature](projects/sensors/dht11-temperature)

- **ICs**
  - [74HC595 Shift Register](projects/ics/74hc595-shift-register)

- **Displays**


---

## 📜 License

This repository is licensed under the [MIT License](LICENSE).  
Feel free to use, modify, and share the code.
