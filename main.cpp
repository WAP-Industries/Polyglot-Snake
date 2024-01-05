#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

#include <vector>


#define return }
#define print(s) std::cout<<s<<"\n"
#define randint std::rand()%(max-min+1)+min

#define index (int i=0
#define in ;
#define range(l) i<l;i++){0?0
#define continue }

#define chr int \
ScreenWidth = 600;
chr;


#if 0
import sys; sys.dont_write_bytecode = True
import tkinter as tk
from random import randint

Window = None

def Init():
    root = tk.Tk()
    root.wm_title("Snake")
    root.iconbitmap('icon.ico')

    Window = tk.Canvas(root, width=ScreenWidth, height=ScreenWidth, bg="black",borderwidth=0, highlightthickness=0)
    Window.pack()

    root.mainloop()

def GameLoop():
    pass

def main():
#endif
#if 0
    """ "
#endif
SDL_Window* Window = nullptr;
SDL_Renderer* Renderer = nullptr;

void Init(){
    Window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenWidth, SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_Surface* Icon = IMG_Load("icon.ico");
    SDL_SetWindowIcon(Window, Icon);
    SDL_FreeSurface(Icon);
    
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    SDL_Init(SDL_INIT_EVERYTHING);
}

void GameLoop(){
    SDL_Event event;
    bool Ended = false;
    while (1){
        if (Ended) break;

        SDL_SetRenderDrawColor(Renderer, 0,0,0,255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        while (SDL_PollEvent(&event)){
            if (event.type==SDL_QUIT){
                SDL_DestroyRenderer(Renderer);
                SDL_DestroyWindow(Window);
                SDL_Quit();
                Ended = true;
                break;
            }
        }
    }
}

main(int argc,char* argv[]){
    std::srand((unsigned) time(NULL));
#if 0
" """
#endif
    Init();
    GameLoop();
    return

#//\
main()
