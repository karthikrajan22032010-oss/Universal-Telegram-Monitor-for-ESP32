# 📱 ESP32 Telegram Bot Monitor

## 📌 Project Overview
This project transforms a standard Telegram chat into a universal, mobile dashboard for ESP32 hardware. By leveraging the Telegram Bot API, it completely eliminates the need for physical LCD screens or localized dashboards. 

The system fetches live environmental data from the internet, syncs precise network time, and allows for two-way remote control of the hardware from anywhere in the world.

## ✨ Key Features
*   **Zero-Hardware Display:** Uses a Telegram Bot as the primary graphical interface.
*   **Live Weather Integration:** Fetches real-time local temperatures via the Open-Meteo API (Kovilpatti coordinates) without requiring external physical sensors.
*   **NTP Time Sync:** Automatically pulls exact internet time for accurate data logging.
*   **Two-Way Communication:** Accepts remote `/stop` and `/start` commands directly from the Telegram chat to pause or resume data feeds using non-blocking timers.

## 🛠️ Tech Stack
*   **Microcontroller:** ESP32
*   **Framework:** Arduino Core
*   **APIs:** Telegram Bot API, Open-Meteo API, NTP Server (`pool.ntp.org`)

## 🚀 How to Run
1. Search for `@BotFather` on Telegram and create a new bot to get your **HTTP API Token**.
2. Search for `@userinfobot` to retrieve your personal **Chat ID**.
3. Update the `ssid` and `password` variables in the code with your WiFi credentials.
4. Paste your Bot Token and Chat ID into the respective variables.
5. Upload the code to your ESP32.
6. **Debugging:** Plug in the board and open a standard physical terminal set to `115200` baud. Using a dedicated physical terminal rather than an integrated VS Code terminal provides the cleanest view to watch the WiFi connect and monitor the live data stream. 
7. Open your newly created bot in Telegram and hit **Start** to receive your first data ping!
