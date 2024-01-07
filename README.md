<p align="center">
  <img src="demo.jpg" width=300 height=300 />
</p>

## The Challenge
Code Snake, but the source code is valid in both Python and C++.  
  
The languages must be independent of each other, meaning you can't do shit like in `gay-version.cpp`, where Python is relying on existing g++ capabilities to compile the c++ code.  

Essentially, each language must run its own version of Snake.

## Implementation
For graphics, I used Tkinter for Python and SDL2 for C++.  
As an additional challenge I tried my best to golf this, which meant combining C++ and Python code using sketchy macros.

---

## Compilation
- C++
    - Run `main.exe` or ...
    - Run `& .\compile.ps1` in your powershell terminal
- Python
    - Run `python main.cpp` in your terminal 
