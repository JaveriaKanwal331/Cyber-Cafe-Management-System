# Cyber Cafe Management System 🖥️☕

A C++ console-based application designed to automate and systematize the daily operations of a cyber cafe. This project facilitates user authentication, computer record management, and billing calculations.

## 📖 Description

The **Cyber Cafe Management System** is a desktop application developed in C++ to replace manual record-keeping. It allows administrators to manage computer slots, track usage, and handle user authentication securely using file handling. The system is designed to increase efficiency and accuracy in managing cyber cafe resources.

## ✨ Features

* **🔐 User Authentication**: Secure Login and Registration system using file handling (`credentials.txt`).
* **💻 Record Management**:
    * **View Records**: Display list of available computers (Brand, Location, ID).
    * **Search Records**: Find specific computers by serial number.
    * **Update Records**: Modify details of existing computer slots.
* **💰 Billing System**: Calculates user fees based on usage time (standard rate applied).
* **📂 File Handling**: Stores login credentials persistently.
* **🎨 Interactive Interface**: Uses a menu-driven interface with clear navigation.

## 🛠️ Tech Stack

* **Language**: C++
* **Platform**: Windows (Uses `windows.h` for system commands and UI styling)
* **Concepts Used**:
    * File I/O (`fstream`)
    * Arrays & Strings
    * Functions & Loops
    * Windows API (for `Sleep` and console formatting)

## 🚀 How to Run

> **Note**: This program uses the `<windows.h>` library, so it is designed to run on Windows operating systems.

1.  **Clone the repository**:
    ```bash
    git clone [https://github.com/yourusername/cyber-cafe-management.git](https://github.com/yourusername/cyber-cafe-management.git)
    ```
2.  **Open the project**:
    Open `final Project c++.cpp` in your favorite C++ IDE (Dev-C++, Code::Blocks, or Visual Studio).
3.  **Compile and Run**:
    Compile the source code and execute the generated `.exe` file.

## 🕹️ Usage Guide

1.  **Main Menu**: Upon launching, choose to **Login** (1) or **Register** (2).
2.  **Registration**: Create a new account by entering a username and password. This will be saved to `credentials.txt`.
3.  **Dashboard**: Once logged in, you can access the Admin Menu:
    * Press `1` to **Show all computers**.
    * Press `2` to **Update a record**.
    * Press `3` to **Search for a record**.
    * Press `4` to **Return to Login**.
    * Press `6` to **Exit**.

## 🔮 Future Improvements

* Implement dynamic memory allocation (Vectors/Linked Lists) to add or remove computers dynamically.
* Add password encryption for better security.
* Improve the billing logic to handle real-time clock tracking.

## 👤 Author

**Javeria Kanwal**
* **Role**: Developer
* **Course**: Programming Fundamentals (Semester Project)
