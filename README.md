<p align="center">
  <img src="demo.jpg" width=300 height=300 />
</p>

## The Challenge
Code Snake, but the source code is valid in both Python and C++.  
  
The languages must be independent of each other, meaning you can't do shit like in `gay-version.cpp`, where Python is relying on existing g++ capabilities to compile the c++ code.  

Essentially, each language must run its own version of Snake.

---

## Implementation
For graphics, I used SDL2 for C++ and Tkinter for Python.  
  
As an additional challenge, I refrained from simply combining two separate source codes for each language into one file. Instead, I tried my best to golf this, which meant combining C++ and Python code using a lot of sketchy macro definitions.

---

## Compilation
- C++
    - Run `main.exe` or ...
    - Run `& .\compile.ps1` in your powershell terminal
- Python
    - Run `python main.cpp` in your terminal 
