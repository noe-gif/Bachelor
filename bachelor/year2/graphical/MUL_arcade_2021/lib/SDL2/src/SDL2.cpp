/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "SDL2.hpp"

// map of pacman
// SDL_Texture *dotTex; // small dot that pacman has to eat
// SDL_Texture *pacTitle;
// SDL_Texture *menu;
// SDL_Rect myMenu;
// SDL_Texture *pacman; // pacman
// SDL_Texture *wall;
// SDL_Rect wallProps;
// SDL_Rect myTitle;

// SDL_Rect sourceRectangle, destRectangle;

// SDL_Rect dstRect, pacRect;

SDL2::SDL2() {
}

SDL2::~SDL2() {}

SDL_Texture *SDL2::LoadTexture(const char *texture, SDL_Renderer *ren) {
    SDL_Surface *tmpSurface = IMG_Load(texture);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    return tex;
}

void SDL2::stop(Data &data)
{
    data.openS = 0;
    // if (data.getInstance() == 3 && data.secondTime == false) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    data.secondTime = true;
    // }
}

void SDL2::init(Data &data)
{
    if (data.openS == 1)
        initStart("Aracade", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 800, false);
    data.openS = 0;
    return;
}

void SDL2::initStart(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    int flags = 0;
    
    if (fullscreen)
        flags = SDL_WINDOW_FULLSCREEN;
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        return;
    window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
    if (window)

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer) {
        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    }
    SDL_Surface *menuImg = IMG_Load("assets/sprites/sdlbackground.png");
    menuBackground = SDL_CreateTextureFromSurface(renderer, menuImg);
}

void SDL2::update() {
}

SDL_Rect SDL2::createInvisibleWallN(int posX, int posY) {
    SDL_Rect dot;

    dot.w = 1;
    dot.h = 1;
    dot.x = posX + 10;
    dot.y = posY + 10;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &dot);
    SDL_RenderDrawRect(renderer, &dot);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return dot;
}

SDL_Rect SDL2::createDotN(int posX, int posY) {
    SDL_Rect dot;

    dot.w = 5;
    dot.h = 5;
    dot.x = posX + 10;
    dot.y = posY + 10;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &dot);
    SDL_RenderDrawRect(renderer, &dot);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return dot;
}

SDL_Rect SDL2::createWallN(int posX, int posY) {

    SDL_Rect rect;
    rect.w = 25;
    rect.h = 25;
    rect.x = posX;
    rect.y = posY;

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderDrawRect(renderer, &rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return rect;
}

SDL_Rect SDL2::createPacmanN(int posX, int posY) {
    SDL_Rect pacman;
    pacman.w = 20;
    pacman.h = 20;
    pacman.x = posX + 2;
    pacman.y = posY + 2;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &pacman);
    SDL_RenderDrawRect(renderer, &pacman);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return pacman;
}

SDL_Rect SDL2::createInvisibleWall(int posX, int posY) {
    SDL_Rect dot;

    dot.w = 1;
    dot.h = 1;
    dot.x = posX + 10;
    dot.y = posY + 10;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &dot);
    SDL_RenderDrawRect(renderer, &dot);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return dot;
}

SDL_Rect SDL2::createDot(int posX, int posY) {
    SDL_Rect dot;

    dot.w = 5;
    dot.h = 5;
    dot.x = posX + 10;
    dot.y = posY + 10;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &dot);
    SDL_RenderDrawRect(renderer, &dot);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return dot;
}

SDL_Rect SDL2::createWall(int posX, int posY) {

    SDL_Rect rect;
    rect.w = 25;
    rect.h = 25;
    rect.x = posX;
    rect.y = posY;

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderDrawRect(renderer, &rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return rect;
}


SDL_Rect SDL2::createPacman(int posX, int posY) {
    SDL_Rect pacman;
    pacman.w = 20;
    pacman.h = 20;
    pacman.x = posX + 2;
    pacman.y = posY + 2;

    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    SDL_RenderFillRect(renderer, &pacman);
    SDL_RenderDrawRect(renderer, &pacman);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    return pacman;
}

void SDL2::createPacmanMap(Data &data, std::vector<std::string> mm, int flag) {
    int posX = 75;
    int posY = 100;
    std::vector<std::string> _map = mm;

    data.rand = 0;
    for (std::size_t i = 0; i < _map.size(); i++) {
        for (std::size_t y = 0; y < _map[i].size(); y++) {
            if (_map[i][y] == '#') {
                if (flag == 0)
                    createWall(posX, posY);
                else
                    createWallN(posX, posY);
                posX += 25;
            } else if (_map[i][y] == 'P') {
                if (flag == 0)
                    createPacman(posX, posY);
                else
                    createPacmanN(posX, posY);
                posX += 25;
            }  else if (y < _map[i].size() - 1 && _map[i][y] == '.') {
                if (flag == 0)
                    createDot(posX, posY);
                else
                    createDotN(posX, posY);
                posX += 25;
            } else if (_map[i][y] == ' ') {
                if (flag == 0)
                    createInvisibleWall(posX, posY);
                else
                    createInvisibleWallN(posX, posY);
                posX += 25;
            }
        }
        posX = 75;
        posY += 30;
    }
}

void SDL2::renderPacman(Data &data) {
    SDL_RenderClear(renderer);
    createPacmanMap(data, data.getMap(), 0);
    SDL_RenderPresent(renderer);
}

void SDL2::renderMenu(Data &data) {
    data.rand = 0;
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, menuBackground, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void SDL2::renderNibbler(Data &data) {
    SDL_RenderClear(renderer);
    createPacmanMap(data, data.getNibblerMap(), 1);
    SDL_RenderPresent(renderer);
}

void SDL2::renderName(Data &data) {
    SDL_RenderClear(renderer);
    data.rand = 0;
    // createPacmanMap(data);
    // SDL_RenderCopy(renderer, menuBackground, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void SDL2::render() {
}

void SDL2::handleEvents(Data &data) 
{
    SDL_Event event;

    SDL_PollEvent(&event);
    if (event.type == SDLK_LEFT)
        return;
    if (event.type == SDLK_RIGHT)
        return;
    if (event.type == SDLK_UP)
        return;
    if (event.type == SDLK_DOWN)
        return;
    if (event.type == SDLK_KP_ENTER)
        return;
    if (event.type == SDLK_ESCAPE)
        return;
    if (event.type == SDLK_TAB)
        return;
    if (event.type == SDL_KEYDOWN) {    
        const char *key = SDL_GetKeyName(event.key.keysym.sym);
        if (strcmp(key, "Q") == 0) {
            if (data.isGameLaunched == false)
                data.setgameSelected("PACMAN");
        }
        if (strcmp(key, "D") == 0) {
            if (data.isGameLaunched == false)
                data.setgameSelected("NIBBLER");
        }
        if (data.isGameLaunched == true && data.gameSelected == "NAME") {
            if (data.isGameLaunched == true && data.gameSelected == "NAME") {
                if (event.type == SDL_KEYDOWN) {
                    const char *key = SDL_GetKeyName(event.key.keysym.sym);
                    if (strcmp(key, "A") == 0)
                        data.setPlayerName("A");
                    if (strcmp(key, "B") == 0)
                        data.setPlayerName("B");
                    if (strcmp(key, "C") == 0)
                        data.setPlayerName("C");
                    if (strcmp(key, "D") == 0)
                        data.setPlayerName("D");
                    if (strcmp(key, "E") == 0)
                        data.setPlayerName("E");
                    if (strcmp(key, "F") == 0)
                        data.setPlayerName("F");
                    if (strcmp(key, "G") == 0)
                        data.setPlayerName("G");
                    if (strcmp(key, "H") == 0)
                        data.setPlayerName("H");
                    if (strcmp(key, "I") == 0)
                        data.setPlayerName("I");
                    if (strcmp(key, "J") == 0)
                        data.setPlayerName("J");
                    if (strcmp(key, "K") == 0)
                        data.setPlayerName("K");
                    if (strcmp(key, "L") == 0)
                        data.setPlayerName("L");
                    if (strcmp(key, "M") == 0)
                        data.setPlayerName("M");
                    if (strcmp(key, "N") == 0)
                        data.setPlayerName("N");
                    if (strcmp(key, "O") == 0)
                        data.setPlayerName("O");
                    if (strcmp(key, "P") == 0)
                        data.setPlayerName("P");
                    if (strcmp(key, "Q") == 0)
                        data.setPlayerName("Q");
                    if (strcmp(key, "R") == 0)
                        data.setPlayerName("R");
                    if (strcmp(key, "S") == 0)
                        data.setPlayerName("S");
                    if (strcmp(key, "T") == 0)
                        data.setPlayerName("T");
                    if (strcmp(key, "U") == 0)
                        data.setPlayerName("U");
                    if (strcmp(key, "V") == 0)
                        data.setPlayerName("V");
                    if (strcmp(key, "W") == 0)
                        data.setPlayerName("W");
                    if (strcmp(key, "X") == 0)
                        data.setPlayerName("X");
                    if (strcmp(key, "Y") == 0)
                        data.setPlayerName("Y");
                    if (strcmp(key, "Z") == 0)
                        data.setPlayerName("Z");
                }
            }
        }
        if (strcmp(key, "M") == 0)
            return;
        if (strcmp(key, "P") == 0)
            return;
        if (strcmp(key, "N") == 0)
            return;
        if (strcmp(key, "R") == 0)
            return;
        if (strcmp(key, "K") == 0)
            return;
        if (strcmp(key, "W") == 0)
            data.isGameLaunched = false;
    }
}

void SDL2::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

void SDL2::setFalse() {
    isRunning = false;
}

std::string SDL2::getEvent() const
{
    SDL_Event event;

    SDL_PollEvent(&event);
    if (event.type == SDLK_LEFT)
        return ("LEFT");
    if (event.type == SDLK_RIGHT)
        return ("RIGHT");
    if (event.type == SDLK_UP)
        return ("UP"); 
    if (event.type == SDLK_DOWN)
        return ("DOWN");
    if (event.type == SDLK_KP_ENTER)
        return ("ENTER");
    if (event.type == SDLK_ESCAPE)
        return ("ESCAPE");
    if (event.type == SDLK_TAB)
        return ("TAB");
    if (event.type == SDL_QUIT)
        return ("ESC");
    else if (event.type == SDL_KEYDOWN) {
        char keyDown = event.key.keysym.scancode;
        if (keyDown == SDL_SCANCODE_RETURN)
            return ("ENTER");
        const char *key = SDL_GetKeyName(event.key.keysym.sym);
        if (strcmp(key, "P") == 0)
            return ("P");
        if (strcmp(key, "N") == 0)
            return ("N");
        if (strcmp(key, "K") == 0)
            return ("K");
    }
    return "";
}

void SDL2::display(Data &data)
{
    if (data.isGameLaunched == false) {
        handleEvents(data);
        // renderMenu(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "PACMAN") {
        handleEvents(data);
        renderPacman(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "NIBBLER") {
        handleEvents(data);
        renderNibbler(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "NAME") {
        handleEvents(data);
        renderName(data);
    }
}

SDL2& SDL2::getInstance()
{
    static SDL2 instance;
    return (instance);
}

extern "C" SDL2 &entryPoint()
{
    return (SDL2::getInstance());
}