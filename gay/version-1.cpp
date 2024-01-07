#//\
name = "temp"
#//\
with open(f"{name}.cpp", "w") as f:\
    f.write("""

    #include "SDL2/SDL.h"
    #include "SDL2/SDL_ttf.h"
    #include "SDL2/SDL_image.h"
    #include <windows.h>
    #include <map>
    #include <tuple>
    #include <string>
    #include <vector>
    #include <string>
    #include <ctime>
    #include <cstdlib>

    const int ScreenWidth = 600;
    const int ScreenTiles = 20;
    const int ScreenScale = ScreenWidth/ScreenTiles;
    const int MaxApples = 5;

    const int MaxFPS = 10;
    const int FrameDelay = 1000/MaxFPS;

    std::map<std::string, std::tuple<int, int, int>> Tiles = {
        {"green", std::tuple(124, 252, 0)},
        {"red", std::tuple(255, 0, 0)}
    };

    void SetColor(SDL_Renderer* renderer, std::string color){
        int r, g, b;
        std::tie(r, g, b) = Tiles[color];
        SDL_SetRenderDrawColor(renderer, r, g, b, 255);
    }

    void DrawTile(SDL_Renderer* r, std::string color, int x, int y){
        SetColor(r, color);
        SDL_Rect tile = {x*ScreenScale, y*ScreenScale, ScreenScale, ScreenScale};
        SDL_RenderFillRect(r, &tile);
    }

    std::vector<std::pair<int, int>> Apples;

    void SpawnApple(){
        auto GetPos = []()->int {
            int min = 0, max = ScreenTiles-1;
            return std::rand()%(max-min+1)+min;
        };
        Apples.push_back({GetPos(), GetPos()});
    }
    void RenderApples(SDL_Renderer* r){
        for (auto i:Apples)
            DrawTile(r, "red", i.first, i.second);
    }

    struct {
        int x, y, tail;
        std::vector<std::pair<int, int>> body;
        std::pair<int, int> velocity;

        void Init(){
            x = y = ScreenTiles/2;
            tail = 5;
            velocity = {0,0};
        }

        void Move(){
            x+=velocity.first;
            y+=velocity.second;

            if (x<0) x = ScreenTiles-1;
            if (y<0) y = ScreenTiles-1;
            if (x>=ScreenTiles) x = 0;
            if (y>=ScreenTiles) y = 0;

            for (int i=0;i<Apples.size();i++){
                if (Apples[i].first==x && Apples[i].second==y){
                    Apples.erase(Apples.begin()+i);
                    tail++;
                    SpawnApple();
                }
            }
        }

        void Render(SDL_Renderer* r){
            for (auto i: body)
                DrawTile(r, "green", i.first, i.second);
            body.push_back({x, y});
            while (body.size()>tail)
                body.erase(body.begin());
        }
    } Snake;


    void Init(){
        std::srand(static_cast<unsigned int>(std::time(NULL)));
        Snake.Init();
        for (int i=0;i<MaxApples;i++)
            SpawnApple();
    }

    SDL_Window* Window = SDL_CreateWindow("Polyglot Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenWidth, SDL_WINDOW_SHOWN);
    SDL_Renderer* Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);


    void GameLoop(){
        SDL_SetRenderDrawColor(Renderer, 0,0,0,255);
        SDL_RenderClear(Renderer);

        Snake.Move();
        Snake.Render(Renderer);

        RenderApples(Renderer);

        SDL_RenderPresent(Renderer);
    }

    int main(int argc, char* argv[]){
        SDL_Surface* Icon = IMG_Load("icon.ico");
        SDL_SetWindowIcon(Window, Icon);
        SDL_FreeSurface(Icon);

        ShowWindow(GetConsoleWindow(), SW_HIDE);
        SDL_Init(SDL_INIT_EVERYTHING);
        SDL_Event event;
        

        Init();
        Uint32 FrameStart;
        int FrameTime;

        while (1){
            FrameStart = SDL_GetTicks();

            while (SDL_PollEvent(&event)){
                if (event.type==SDL_QUIT){
                    SDL_DestroyRenderer(Renderer);
                    SDL_DestroyWindow(Window);
                    SDL_Quit();
                    return 0;
                }
                else if (event.type==SDL_KEYDOWN){
                    SDL_Keysym keysm = event.key.keysym;
                    SDL_Keycode keycode = keysm.sym;

                    switch (keycode){
                        case SDLK_w:
                            Snake.velocity = {0,-1};
                            break;
                        case SDLK_a:
                            Snake.velocity = {-1,0};
                            break;
                        case SDLK_s:
                            Snake.velocity = {0,1};
                            break;
                        case SDLK_d:
                            Snake.velocity = {1,0};
                            break;
                    }
                }
            }
            GameLoop();

            FrameTime = SDL_GetTicks() - FrameStart;
            if (FrameDelay > FrameTime)
                SDL_Delay(FrameDelay - FrameTime);
        }
    }

    #define b """)
#if 0
import subprocess, os
path = os.path.dirname(os.path.abspath(__file__))+"\\"
try:
    subprocess.run(f'g++ "{path}{name}.cpp" -w -Llib -Wall -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -o "{name}" && start {name}.exe', shell=True, check=True)
except subprocess.CalledProcessError as e:
    print(e)
#endif
