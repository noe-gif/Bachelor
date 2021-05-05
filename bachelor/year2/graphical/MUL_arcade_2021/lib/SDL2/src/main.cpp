#include <iostream>
#include </opt/homebrew/Cellar/sdl2/2.0.14_1/include/SDL2/SDL.h>
#include </opt/homebrew/Cellar/sdl2_image/2.0.5/include/SDL2/SDL_image.h>
#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char **argv) {
    game = new Game();

    game->init("Aracade", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, false);

    SDL_Event event;

    while (game->running()) {
        // Process event
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                game->setFalse();
            } else if(event.type == SDL_KEYDOWN) {
                const char *key = SDL_GetKeyName(event.key.keysym.sym);
                if (strcmp(key, "Z") == 0) {
                    std::cout << "Z pressed!" << std::endl;
                }
                if (strcmp(key, "Q") == 0) {
                    std::cout << "Q pressed!" << std::endl;
                }
                if (strcmp(key, "S") == 0) {
                    std::cout << "S pressed!" << std::endl;
                }
                if (strcmp(key, "D") == 0) {
                    std::cout << "D pressed!" << std::endl;
                }
            }
        }
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
    return 0;
}
