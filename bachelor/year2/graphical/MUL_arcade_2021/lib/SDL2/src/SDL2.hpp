/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** main
*/

#ifndef TEST_SDL2_SDL2_H
#define TEST_SDL2_SDL2_H

#include <vector>
#include "IDisplayModule.hpp"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class SDL2 : public IDisplayModule {
public:
    SDL2();
    ~SDL2();

    void initStart(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    void handleEvents(Data &data);
    void update();
    void render();
    void clean();
    void setFalse();
    SDL_Rect createWall(int posX, int posY);
    SDL_Rect createDot(int posX, int posY);
    SDL_Rect createPacman(int posX, int posY);
    SDL_Texture *LoadTexture(const char *texture, SDL_Renderer *ren);
    void createPacmanMap(Data &data, std::vector<std::string> mm, int flag);
    bool running() { return isRunning; }
    std::vector<SDL_Rect> RectVector;
    std::vector<SDL_Rect> rectangles;
    void renderMenu(Data &data);
    SDL_Rect createInvisibleWall(int posX, int posY);
    SDL_Rect createInvisibleWallN(int posX, int posY);
    SDL_Rect createDotN(int posX, int posY);
    SDL_Rect createWallN(int posX, int posY);
    SDL_Rect createPacmanN(int posX, int posY);
    void renderPacman(Data &data);
    void renderNibbler(Data &data);
    void renderName(Data &data);

    std::string getEvent() const override;
    void display(Data &data) override;
    static SDL2& getInstance();
    void stop(Data &data) override;
    void init(Data &data);

private:
    SDL_Texture *menuBackground;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *menu;
};


#endif //TEST_SDL2_SDL2_H
