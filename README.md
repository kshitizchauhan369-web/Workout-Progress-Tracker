# 🏋️‍♂️ Workout Progress Tracker

A lightweight, console-based **C++ application** designed to help users log their exercises, monitor physical activity, and track fitness trends over time using Object-Oriented Programming (OOP) and file handling.

---

## 🌟 Key Features

* **📝 Log Workouts:** Record exercise names, duration, and calories burned.


* **💾 Persistent Storage:** Automatically saves your progress to a `workout.txt` file so data remains safe between sessions.


* **📊 Performance Stats:** View your lifetime totals for workout time and calories burned.


* **💻 Clean CLI:** Simple, menu-driven interface for easy navigation.



---

## 🛠️ Technical Implementation

The project leverages fundamental **C++** concepts to manage data efficiently:

* **Object-Oriented Programming:** The `Workout` class encapsulates all attributes and behaviors.


* **File I/O (`fstream`):** Implements `ios::app` for seamless data logging and `while (file >> ...)` for efficient reading.


* **Memory Management:** Efficient use of stack-based objects and standard library strings.



---

## 🚀 Getting Started

### Prerequisites

* A C++ compiler (GCC, Clang, or MSVC).



### Installation & Execution

1. **Clone the repository:**
```bash
git clone https://github.com/yourusername/workout-tracker.git
cd workout-tracker
```[cite: 1]

```


2. **Compile the program:**
```bash
g++ -o tracker main.cpp
```[cite: 1]

```


3. **Run the application:**

```bash
    ./tracker
    ```[cite: 1]

---

## 📸 Preview

```text
==== Workout Progress Tracker ====
1. Add Workout
2. View Workouts
3. Show Total Progress
4. Exit
Enter Choice: 1

Enter Workout Name: Deadlifts
Enter Duration (minutes): 45
Enter Calories Burned: 350

Workout Added Successfully!
```[cite: 1]

---

## 📈 Future Roadmap

*   [ ] **Data Erasure:** Add functionality to delete or clear the history[cite: 1].
*   [ ] **Timed Logs:** Add automatic timestamps for each workout entry[cite: 1].
*   [ ] **Enhanced UI:** Color-coded console output for better readability[cite: 1].
*   [ ] **Input Validation:** Handle spaces in workout names and non-integer inputs[cite: 1].

---
## 🤝 Contributing
Contributions are welcome! If you have ideas for new features or improvements, feel free to fork the repo and create a pull request[cite: 1].

