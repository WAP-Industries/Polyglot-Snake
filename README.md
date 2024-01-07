<p align="center">
  <img src="demo.jpg" width=300 height=300 />
</p>

## The Challenge
This is an extension of the [disguised program challenge](https://codegolf.stackexchange.com/questions/15372/write-a-program-in-disguise) on Code Golf.  
The source code must look like another language at first glance, and must run Snake in both languages.      

Rules:
1. The languages must be independent of each other
   - You can't do shit like in [`gay/version-1.cpp`](https://github.com/WAP-Industries/Polyglot-Snake/blob/main/gay/version-1.cpp), where Python is relying on existing g++ capabilities to compile the C++ code
   - Essentially, each language must run its own version of Snake
2.  Your code must look like one full program
    - You cannot have two separate full source codes for each language, as this violates the "disguise" criteria of the challenge
    - A solution like in [`gay/version-2.cpp`](https://github.com/WAP-Industries/Polyglot-Snake/blob/main/gay/version-2.cpp) would be too easy otherwise

---

## Implementation
For this challenge, I chose Python and C++.    
For graphics, I used Tkinter for Python and SDL2 for C++.  

---

## Compilation
- C++
    - Run `main.exe` or ...
    - Run `& .\compile.ps1` in your powershell terminal
- Python
    - Run `python main.cpp` in your terminal 
