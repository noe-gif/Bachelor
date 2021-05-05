/*
** EPITECH PROJECT, 2021
** nibblerEngline
** File description:
** functions
*/

#include "nibblerEngine.hpp"

nibblerEngline::nibblerEngline()
{
}

nibblerEngline::~nibblerEngline()
{
}

/*
   ###################################################################
   #                                                                 #
   #                             pacmanEnG                           #
   #                                                                 #
   ###################################################################
*/

void nibblerEngline::moveNibbler(const std::string &input, Data &data)
{
    for (std::size_t i = 0; i < _updatedMap.size(); i++) {
        for (std::size_t y = 0; y < _updatedMap[i].size(); y++) {
            if (_updatedMap[i][y] == 'P') {
                if (input.compare("RIGHT") == 0 && _updatedMap[i][y + 1] != '#') {
                    if (_updatedMap[i][y + 1] == 'O')
                        data.setScore(0, 10);
                    _updatedMap[i][y + 1] = _updatedMap[i][y];
                    if (_updatedMap[i][y + 1] == '#')
                        _updatedMap[i][y] = _updatedMap[i][y - 1];
                    else if (_updatedMap[i][y + 1] == '.') {
                        _updatedMap[i][y] = '.';
                    } else if (_updatedMap[i][y + 1] == 'O') {
                        _updatedMap[i][y] = ' ';
                    } else
                        _updatedMap[i][y] = ' ';
                    return;
                } if (input.compare("LEFT") == 0 && _updatedMap[i][y - 1] != '#') {
                    if (_updatedMap[i][y - 1] == 'O')
                        data.setScore(0, 10);
                    _updatedMap[i][y - 1] = _updatedMap[i][y];
                    if (_updatedMap[i][y - 1] == '#')
                        _updatedMap[i][y] = _updatedMap[i][y + 1];
                    else if (_updatedMap[i][y - 1] == '.') {
                        _updatedMap[i][y] = '.';
                    } else if (_updatedMap[i][y - 1] == 'O') {
                        data.setScore(0, 10);
                        _updatedMap[i][y] = ' ';
                    } else
                        _updatedMap[i][y] = ' ';
                    return;
                } if (input.compare("UP") == 0 && _updatedMap[i - 1][y] != '#') {
                    if (_updatedMap[i - 1][y] == 'O')
                        data.setScore(0, 1);
                    _updatedMap[i - 1][y] = _updatedMap[i][y];
                    if (_updatedMap[i - 1][y] == '#')
                        _updatedMap[i][y + 1] = _updatedMap[i][y];
                    else if (_updatedMap[i - 1][y] == '.') {
                        _updatedMap[i][y] = '.';
                    } else if (_updatedMap[i - 1][y] == 'O') {
                        data.setScore(0, 10);
                        _updatedMap[i][y] = ' ';
                    } else
                        _updatedMap[i][y] = ' ';
                    return;
                } if (input.compare("DOWN") == 0  && _updatedMap[i + 1][y] != '#') {
                    if (_updatedMap[i + 1][y] == 'O')
                        data.setScore(0, 1);
                    _updatedMap[i + 1][y] = _updatedMap[i][y];
                    if (_updatedMap[i + 1][y] == '#')
                        _updatedMap[i][y - 1] = _updatedMap[i][y];
                    else if (_updatedMap[i + 1][y] == ' ') {
                        _updatedMap[i][y] = '.';
                    } else if (_updatedMap[i + 1][y] == 'O') {
                        data.setScore(0, 10);
                        _updatedMap[i][y] = ' ';
                    } else
                        _updatedMap[i][y] = ' ';
                    return;
                }
            }
        }
    }
}


void nibblerEngline::engine(const std::string &input, Data &data) 
{
    _updatedMap = data.getNibblerMap();

    if (input == "TAB")
        data.isGameLaunched = false;
    if (input == "R") {
        data.setNibblerMap(data.initNibblerMap());
        data.resetScore(data.getPacmanScore(), 0);
    } else {
        moveNibbler(input, data);
        data.setNibblerMap(_updatedMap);
    }
}

nibblerEngline& nibblerEngline::getInstance()
{
    static nibblerEngline instance;
    return (instance);
}

extern "C" nibblerEngline &entryPoint()
{
    return (nibblerEngline::getInstance());
}