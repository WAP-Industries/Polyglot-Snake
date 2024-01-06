#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

#include <vector>

#define print(s) std::cout<<s<<"\n"
#define sleep(i) FrameTime = SDL_GetTicks()-FrameStart; if (FrameDelay>FrameTime): 1;SDL_Delay(FrameDelay-FrameTime);pass;
#define randint std::rand()%(max-min+1)+min

#define return }
#define index (int i=0
#define in ;
#define range(l) i<l;i++){0?0
#define pass }
#define while(i) while(i){0?0
#define if(i) if(i){0?0

#define id int

id
ScreenWidth = 600;
id
ScreenTiles = 20;
id
ScreenScale = ScreenWidth/ScreenTiles;
id 
MaxApples = 5;
id
MaxFPS = 10;
id
FrameDelay = 1000/MaxFPS;


#if 0
import sys; sys.dont_write_bytecode = True
import tkinter as tk
from random import randint

Root = Window = None

def Init():
    global Root,Window
    Root = tk.Tk()
    Root.wm_title("Snake")
    Root.iconbitmap('icon.ico')

    Window = tk.Canvas(Root, width=ScreenWidth, height=ScreenWidth, bg="black",borderwidth=0, highlightthickness=0)
    Window.pack()

    Root.mainloop()


def main():
#endif
#if 0
    """ "
#endif
SDL_Window* Window = nullptr;
SDL_Renderer* Renderer = nullptr;

SDL_Event event;
bool Ended = false;

Uint32 FrameStart;
int FrameTime;

void Init(){
    Window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenWidth, SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_Surface* Icon = IMG_Load("icon.ico");
    SDL_SetWindowIcon(Window, Icon);
    SDL_FreeSurface(Icon);
    
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    SDL_Init(SDL_INIT_EVERYTHING);
}

main(int argc,char* argv[]){
    std::srand((unsigned) time(NULL));
#if 0
" """
#endif
    Init();

    while (1):
        1;
        #if 0
        if not Root.winfo_exists(): break;
        #endif
        #if 0
        """ "
        #endif
        FrameStart = SDL_GetTicks();

        if (Ended): 1;break;pass;
        SDL_SetRenderDrawColor(Renderer, 0,0,0,255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        while (SDL_PollEvent(&event)):1;
            if (event.type==SDL_QUIT):1;
                SDL_DestroyRenderer(Renderer);
                SDL_DestroyWindow(Window);
                SDL_Quit();
                Ended = true;
                break;
                pass
            pass
        #if 0
        " """
        #endif
        sleep(10);
        pass
    return

#//\
main()
