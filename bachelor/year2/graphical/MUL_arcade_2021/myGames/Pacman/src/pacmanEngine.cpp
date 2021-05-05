/*
** EPITECH PROJECT, 2021
** pacmanEngine
** File description:
** functions
*/

#include "pacmanEngine.hpp"

pacmanEngine::pacmanEngine()
{
}

pacmanEngine::~pacmanEngine()
{
}

/* 
   ###################################################################
   #                                                                 #
   #                             pacmanEnG                           #
   #                                                                 #
   ###################################################################
*/

void pacmanEngine::movePacman(const std::string &input, Data &data)
{
    for (std::size_t i = 0; i < _updatedMap.size(); i++) {
        for (std::size_t y = 0; y < _updatedMap[i].size(); y++) {
            if (_updatedMap[i][y] == 'P') {
                if (input.compare("RIGHT") == 0 && _updatedMap[i][y + 1] != '#') {
                    _updatedMap[i][y + 1] = _updatedMap[i][y];
                    if (_updatedMap[i][y + 1] == '#')
                        _updatedMap[i][y] = _updatedMap[i][y - 1];
                    else {
                        data.setScore(1, 0);
                        _updatedMap[i][y] = ' ';
                    }
                    return;
                } if (input.compare("LEFT") == 0 && _updatedMap[i][y - 1] != '#') {
                    _updatedMap[i][y - 1] = _updatedMap[i][y];
                    if (_updatedMap[i][y - 1] == '#')
                        _updatedMap[i][y] = _updatedMap[i][y + 1];
                    else {
                        data.setScore(1, 0);
                        _updatedMap[i][y] = ' ';
                    }
                    return;
                } if (input.compare("UP") == 0 && _updatedMap[i - 1][y] != '#') {
                    _updatedMap[i - 1][y] = _updatedMap[i][y];
                    if (_updatedMap[i - 1][y] == '#')
                        _updatedMap[i][y + 1] = _updatedMap[i][y];
                    else {
                        data.setScore(1, 0);
                        _updatedMap[i][y] = ' ';
                    }
                    return;
                } if (input.compare("DOWN") == 0  && _updatedMap[i + 1][y] != '#') {
                    _updatedMap[i + 1][y] = _updatedMap[i][y];
                    if (_updatedMap[i + 1][y] == '#')
                        _updatedMap[i][y - 1] = _updatedMap[i][y];
                    else {
                        data.setScore(1, 0);
                        _updatedMap[i][y] = ' ';
                    }
                    return;
                }
            }
        }
    }
}

void pacmanEngine::engine(const std::string &input, Data &data) 
{
    _updatedMap = data.getMap();

    if (input == "TAB")
        data.isGameLaunched = false;
    if (input == "R") {
        data.setMap(data.initMap());
        data.resetScore(0, data.getNibblerScore());
    } else {
        movePacman(input, data);
        data.setMap(_updatedMap);
    }
}

pacmanEngine& pacmanEngine::getInstance()
{
    static pacmanEngine instance;
    return (instance);
}

extern "C" pacmanEngine &entryPoint()
{
    return (pacmanEngine::getInstance());
}