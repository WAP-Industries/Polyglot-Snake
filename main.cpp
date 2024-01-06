#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

#include <vector>

#define print(s) std::cout<<s<<"\n"
#define randint std::rand()%(max-min+1)+min
#define len(l) l.size()
#define pop(i) erase(i)
#define ord FrameTime = SDL_GetTicks()-FrameStart; if (FrameDelay>FrameTime): 0;SDL_Delay(FrameDelay-FrameTime);pass;

#define index (int i=0
#define in ;
#define range(l) i<l;i++){0?0
#define pass }
#define while(i) while(i){0?0
#define if(i) if(i){0?0

#define id int
#define any auto
#define chr char*

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

chr
GameTitle = "Polyglot Snake";

#if 0
def Move(event):
    SDLK_w, SDLK_a, SDLK_s, SDLK_d = "w", "a", "s", "d"
    Key = event.keysym
#endif
#if 0
    """ "
#endif
struct {
    int X, Y, Tail;
    std::vector<std::vector<int>> Body;
    int Velocity[2] = {0,0};
} Snake;

void Move(SDL_Keycode Key){
#if 0
" """
#endif
    if (Key==SDLK_w): 1; Snake.Velocity[0] = 0; Snake.Velocity[1] = -1; pass;
    if (Key==SDLK_a): 1; Snake.Velocity[0] = -1; Snake.Velocity[1] = 0; pass;
    if (Key==SDLK_s): 1; Snake.Velocity[0] = 0; Snake.Velocity[1] = 1; pass;
    if (Key==SDLK_d): 1; Snake.Velocity[0] = 1; Snake.Velocity[1] = 0; pass;
    pass

#if 0
import sys; sys.dont_write_bytecode = True
import tkinter as tk
from random import randint

Root = Window = None

class Snake:
    X = Y = Tail = 0
    Body = []
    Velocity = [0,0]


def Init():
    global Root, Window

    Root = tk.Tk()
    Root.wm_title(GameTitle)
    Root.iconbitmap('icon.ico')
    Root.resizable(False, False)
    Root.bind("<Key>", Move)

    Window = tk.Canvas(Root, width=ScreenWidth, height=ScreenWidth, bg="black",borderwidth=0, highlightthickness=0)
    Window.pack()

Renderer, SDL_RenderPresent = None, lambda x:0


def main():
    global Window
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

void SetColor(std::string color){
    int r, g, b;
    std::tie(r, g, b) = std::tuple(124, 252, 0);
    SDL_SetRenderDrawColor(Renderer, r, g, b, 255);
}

void DrawTile(std::string Color, int X, int Y){
    SetColor(Color);
    SDL_Rect Tile = {X*ScreenScale, Y*ScreenScale, ScreenScale, ScreenScale};
    SDL_RenderFillRect(Renderer, &Tile);
}

void Init(){
    Window = SDL_CreateWindow(GameTitle, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenWidth, SDL_WINDOW_SHOWN);
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
    #//\
    if not Window:
        Init();
        Snake.X = Snake.Y = ScreenTiles/2;
        Snake.Tail = 5;
        Snake.Velocity[0] = Snake.Velocity[1] = 0;

    #//\
    if not Root.winfo_exists(): return;
    while (1):
        0;
        #if 0
        """ "
        #endif
        if (Ended): 0;break;pass;
        FrameStart = SDL_GetTicks();

        while (SDL_PollEvent(&event)):0;
            if (event.type==SDL_QUIT):0;
                SDL_DestroyRenderer(Renderer);
                SDL_DestroyWindow(Window);
                SDL_Quit();
                Ended = true;
                break;
                pass
            if (event.type==SDL_KEYDOWN):0;
                Move(event.key.keysym.sym);
                pass
            pass

        SDL_SetRenderDrawColor(Renderer, 0,0,0,255);
        SDL_RenderClear(Renderer);
        #if 0
        " """
        #endif
        Snake.X+=Snake.Velocity[0];
        Snake.Y+=Snake.Velocity[1];

        if (Snake.X<0): 0; Snake.X = ScreenTiles-1; pass;
        if (Snake.Y<0): 0; Snake.Y = ScreenTiles-1; pass;
        if (Snake.X>=ScreenTiles): 0; Snake.X = 0; pass;
        if (Snake.Y>=ScreenTiles): 0; Snake.Y = 0; pass;

        #if 0
        X,Y = list(map(lambda x:x*ScreenScale, [Snake.X, Snake.Y]))
        Snake.Body.append(Window.create_rectangle(X, Y, X+ScreenScale, Y+ScreenScale, fill=f"#{124:02X}{252:02X}{0:02X}",outline=""));
        #endif
        #if 0
        """ "
        #endif
        for (auto i: Snake.Body)
            DrawTile("green", i[0],i[1]);
        Snake.Body.push_back({Snake.X, Snake.Y});
        #if 0
        " """
        #endif
        while (len(Snake.Body)>Snake.Tail): 
            0;
            #if 0
            Window.delete(Snake.Body[0]);
            try:
            #endif
                any
                i = Snake.Body.begin();
            #//\
            except: i = 0
            Snake.Body.pop(i);
            pass

        SDL_RenderPresent(Renderer);
        ord;
        pass
        #//\
        break;
    #//\
    Root.after(int(FrameDelay),main);
    pass

#//\
main(); Root.mainloop()
