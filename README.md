# custom_delay_function_for_Arduino

This project demonstrates how to implement and use a custom delay function in Arduino, along with an example `blink` function defined in a custom library.

## 🧠 Purpose

The default `delay()` function in Arduino halts the processor, which makes it unsuitable for multitasking scenarios. This project provides a `customdelay()` function that adds additional functionality (e.g., blinking an LED at intervals during the delay) without freezing the entire program. You can pass 'n' number of functions with their parameters to operate even during `delay()` call.

## ⚙️ How It Works

- `customdelay.cpp` contains the function `void customdelay(unsigned long delaytime, task t[],int task_count);` which:
  - Waits for a given number of milliseconds.
  - Calls the `blink(int times)` function from the custom library during the delay.
- The `blink` library defines a reusable function `blink(int times)` that blinks an LED a specified number of times.
- A `task` is a struct used to hold function pointers and their parameters.
- `task t[]` is an array and used to pass function with their parameter.Eg, `task t[] = { {bink,300}, { msg, 'king'}}`
- `task_count` is used to call functions one-by-one.


## 🔧 Dependencies
- Arduino Uno or compatible board
- Arduino IDE
- Custom blink library

## 👨‍💻 Author: Yash Jadhav






![image](https://github.com/user-attachments/assets/d1b4bde0-f0a7-429c-9ec4-f7f95a1e3e9e)

### Output simulation in Protues
  
