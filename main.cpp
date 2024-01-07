#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

#include <vector>
#include <tuple>

#define print(s) std::cout<<s<<"\n"
#define randint(min, max) std::rand()%(max-min+1)+min
#define len(l) l.size()
#define pop(i) erase(i)
#define ord SDL_RenderPresent(Renderer); FrameTime = SDL_GetTicks()-FrameStart; if (FrameDelay>FrameTime): 0;SDL_Delay(FrameDelay-FrameTime);pass;
#define append push_back
#define list(i) i

#define index (int i=0
#define in ;
#define range(l) i<l;i++){0?0
#define pass }
#define while(i) while(i){0?0
#define if(i) if(i){0?0

#define id int
#define any auto
#define chr char*
#define map std::tuple<int, int, int>
#define set std::vector<std::vector<int>>
#define dict std::vector<int>
#define maketuple std::tuple

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

#//\
maketuple = lambda *args: tuple(i for i in args)
map
Green = maketuple(124, 252, 0);
map
Red = maketuple(255, 0, 0);

set
Apples=list({});

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
    set Body;
    int Velocity[2] = {0,0};
} Snake;

void Move(SDL_Keycode Key){
#if 0
" """
#endif
    if (Key==SDLK_w): 0; Snake.Velocity[0] = 0; Snake.Velocity[1] = -1; pass;
    if (Key==SDLK_a): 0; Snake.Velocity[0] = -1; Snake.Velocity[1] = 0; pass;
    if (Key==SDLK_s): 0; Snake.Velocity[0] = 0; Snake.Velocity[1] = 1; pass;
    if (Key==SDLK_d): 0; Snake.Velocity[0] = 1; Snake.Velocity[1] = 0; pass;
    pass

#if 0
def SpawnApple():
    def GetPos():
#endif
#if 0
        """ "
#endif
void SpawnApple(){
    auto GetPos = []()->int {
#if 0
" """
#endif
        return randint(0, ScreenTiles-1);
        pass;
    dict 
    pos = {GetPos(), GetPos()};
    #//\
    pos = CreateTile(*map(lambda x:x*ScreenScale, [GetPos(), GetPos()]), Red);
    Apples.append(pos);
pass


#if 0
import sys; sys.dont_write_bytecode = True
import win32gui, win32con; win32gui.ShowWindow(win32gui.GetForegroundWindow(), win32con.SW_HIDE)
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

GetHex = lambda Color: f"#{Color[0]:02X}{Color[1]:02X}{Color[2]:02X}"
CreateTile = lambda X,Y, Color: Window.create_rectangle(X, Y, X+ScreenScale, Y+ScreenScale, fill=GetHex(Color),outline="")

def main():
    global Window, Apples
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

void SetColor(std::tuple<int, int, int> Color){
    int r, g, b;
    std::tie(r, g, b) = Color;
    SDL_SetRenderDrawColor(Renderer, r, g, b, 255);
}

void DrawTile(std::tuple<int, int, int> Color, int X, int Y){
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
        Apples = []
        for index in range(MaxApples):
            0;
            SpawnApple();
            pass

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

        for index in range(len(Apples)):
            0;
            #//\
            i = index
            #if 0
            X, Y = map(lambda x:x/ScreenScale, Window.coords(Apples[i])[:2])
            #endif
            #if 0
            """ "
            #endif
            auto X = Apples[i][0], Y = Apples[i][1];
            #if 0
            " """
            #endif
            if (X==Snake.X and Y==Snake.Y):
                0;
                any
                #//\
                try:
                    a = Apples.begin()+i;
                #if 0
                except: a = i;
                Window.delete(Apples[a]);
                #endif
                Apples.pop(a);
                Snake.Tail+=1;
                SpawnApple();
                pass
            pass

        #//\
        Snake.Body.append(CreateTile(*map(lambda x:x*ScreenScale, [Snake.X, Snake.Y]), Green));
        #if 0
        """ "
        #endif
        for (auto i:Apples) DrawTile(Red, i[0], i[1]);
        for (auto i: Snake.Body)
            DrawTile(Green, i[0],i[1]);
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

        ord
        pass
        #//\
        break;
    #//\
    Root.after(int(FrameDelay),main);
    pass

#//\
main(); Root.mainloop()