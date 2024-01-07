<p align="center">
  <img src="demo.jpg" width=300 height=300 />
</p>

## The Challenge
This is an extension of the [disguised program challenge](https://codegolf.stackexchange.com/questions/15372/write-a-program-in-disguise) on Code Golf.  
Code Snake, but the source code must be a polyglot (valid in 2 or more languages).  

Rules:
1. The languages must be independent of each other
   - You can't do shit like in [`gay/version-1.cpp`](https://github.com/WAP-Industries/Polyglot-Snake/blob/main/gay/version-1.cpp), where Python is relying on existing g++ capabilities to compile the C++ code
   - Essentially, each language must run its own version of Snake
2.  Your code must look like one full program
   - You cannot have two separate full source codes for each language
   - A solution like in [`gay/version-2.cpp`](https://github.com/WAP-Industries/Polyglot-Snake/blob/main/gay/version-2.cpp) would be too easy otherwise

---

## Implementation
For this challenge, I chose Python and C++ for my polyglot.  
For graphics, I used Tkinter for Python and SDL2 for C++.  

---

## Compilation
- C++
    - Run `main.exe` or ...
    - Run `& .\compile.ps1` in your powershell terminal
- Python
    - Run `python main.cpp` in your terminal 
