/*
** EPITECH PROJECT, 2021
** data
** File description:
** arcade
*/

#include "Data.hpp"
#include <fstream>
#include <vector>
#include <algorithm>

Data::Data() : firstTime(true), isGameLaunched(false),
gameSelected("PACMAN"), isNcurse(false), _playerName("default")
{
    _instance = 1;
    _score[0] = 0;
    _score[1] = 0;
    pacmanScore = 0;
    nibblerScore = 0;
    openW = 1;
    openS = 1;
    secondTime = false;
    _map = this->initMap();
    _nibblerMap = this->initNibblerMap();
    _text = this->initText();
    _textNibbler = this->initNibblerText();
}

Data::~Data()
{
}


const std::map<std::string, std::pair<std::size_t, std::size_t>> Data::initNibblerText()
{
    std::map<std::string, std::pair<std::size_t, std::size_t>> newMap =
    {
        { "NIBBLER \nMenu with TAB and R to reset", std::make_pair(10, 10) },
        { "SCORE ", std::make_pair(10, 720) }
    };
    return (newMap);

}

const std::map<std::string, std::pair<std::size_t, std::size_t>> Data::initText()
{
    std::map<std::string, std::pair<std::size_t, std::size_t>> newMap =
    {
        { "PACMAN - Menu with TAB - R Reset", std::make_pair(10, 10) },
        { "SCORE :", std::make_pair(10, 520) }
    };
    return (newMap);
}


const std::vector<std::string> Data::initMap()
{
    std::string line;
    std::vector<std::string> _new;
    std::ifstream myfile("maps/pacman.txt");

    if (myfile.is_open()) {
        while (getline (myfile, line))
            _new.push_back(line);
        myfile.close();
        return _new;
    }
    else
        return _new;
    return _new;
}

const std::vector<std::string> Data::initNibblerMap()
{
    std::string line;
    std::vector<std::string> _new;
    std::ifstream myfile("maps/nibbler.txt");

    if (myfile.is_open()) {
        while (getline (myfile, line))
            _new.push_back(line);
        myfile.close();
        return _new;
    }
    else
        return _new;
    return _new;
}

void Data::setMap(std::vector<std::string> _new)
{
    _map.clear();
    for (std::size_t i = 0; i < _new.size(); i++) {
        _map.push_back(_new[i]);
    }
}

void Data::setNibblerMap(std::vector<std::string> _new)
{
    _nibblerMap.clear();
    for (std::size_t i = 0; i < _new.size(); i++) {
        _nibblerMap.push_back(_new[i]);
    }
}

void Data::resetScore(int pacman, int nibbler)
{
    _score[0] = pacman;
    _score[1] = nibbler;
    pacmanScore = _score[0];
    nibblerScore = _score[1];
}

void Data::setScore(int pacman, int nibbler)
{
    _score[0] += pacman;
    _score[1] += nibbler;
    pacmanScore = _score[0];
    nibblerScore = _score[1];
}

void Data::removeLplayerName()
{
    _playerName.resize(_playerName.size() - 1);
}

void Data::setPlayerNameC(char character)
{
    if (_playerName.size() < 9)
        _playerName.push_back(character);
}

void Data::setPlayerName(std::string name)
{
    if (_playerName.size() < 9)
        _playerName.append(name);
}

void Data::setgameSelected(std::string game)
{
    gameSelected = game;
}

void Data::setInstance(int inst)
{
    if (_instance < 3)
        _instance += inst;
}

void Data::removeInstance(int inst)
{
    if (_instance > 1)
        _instance -= inst;
    secondTime = false;
}


const int &Data::getInstance() const
{
    return (_instance);
}

const std::string &Data::getPlayerName() const
{
    return (_playerName);
}

const int &Data::getPacmanScore() const
{
    return (pacmanScore);
}

const int &Data::getNibblerScore() const
{
    return (nibblerScore);
}

const std::map<int, int> &Data::getScore() const 
{
    return _score;
}

const std::vector<std::string> &Data::getMap() const
{
    return _map;
}

const std::vector<std::string> &Data::getNibblerMap() const
{
    return _nibblerMap;
}


const std::map<std::string, std::pair<std::size_t, std::size_t>> &Data::getText() const
{
    return _text;
}

const std::map<std::string, std::pair<std::size_t, std::size_t>> &Data::getNibblerText() const
{
    return _textNibbler;
}
