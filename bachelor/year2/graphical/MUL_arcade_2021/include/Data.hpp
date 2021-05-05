/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** data
*/

#ifndef DATA_HPP
#define DATA_HPP
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <string>

class Data {
    public:
        Data();
        virtual ~Data();
        // const std::map<std::string, ISymbole> &getSymbole() const;
        const int &getInstance() const;
        void setInstance(int inst);
        const std::vector<std::string> &getMap() const;
        const std::vector<std::string> &getNibblerMap() const;
        void setMap(std::vector<std::string> _new);
        void setNibblerMap(std::vector<std::string> _new);
        const std::map<std::string, std::pair<std::size_t, std::size_t>> &getText() const;
        const std::map<std::string, std::pair<std::size_t, std::size_t>> &getNibblerText() const;
        const std::vector<std::string> initMap();
        const std::vector<std::string> initNibblerMap();
        const std::map<std::string, std::pair<std::size_t, std::size_t>> initText();
        const std::map<std::string, std::pair<std::size_t, std::size_t>> initNibblerText();
        void setgameSelected(std::string game);
        const std::map<int, int> &getScore() const;
        const int &getPacmanScore() const;
        const int &getNibblerScore() const;
        const std::string &getPlayerName() const;
        void setScore(int pacman, int nibbler);
        void setPlayerName(std::string name);
        void setPlayerNameC(char character);
        void removeLplayerName();
        void resetScore(int pacman, int nibbler);
        void removeInstance(int inst);

        int index;
        int openW;
        int openS;
        bool firstTime;
        bool secondTime;
        bool isGameLaunched;
        std::string gameSelected;
        bool isNcurse;
        int rand;
    protected:
    private:
        int _instance;
        int pacmanScore;
        int nibblerScore;
        std::map<int, int> _score;
        std::string _playerName;
        std::vector<std::string> _map;
        std::vector<std::string> _nibblerMap;
        std::map<std::string, std::pair<std::size_t, std::size_t>> _text;
        std::map<std::string, std::pair<std::size_t, std::size_t>> _textNibbler;
};

#endif /* !DATA_HPP */