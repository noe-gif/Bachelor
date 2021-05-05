/*
** EPITECH PROJECT, 2021
** pacmanEngine
** File description:
** pacmanEngine
*/

#ifndef PACMAN_ENGINE_HPP
#define PACMAN_ENGINE_HPP
#include <string>
#include <iostream>
#include "IGameModule.hpp"
#include "Data.hpp"

class pacmanEngine : public IGameModule {
    public:
        pacmanEngine();
        virtual ~pacmanEngine();
        void engine(const std::string &input, Data &data);
        
        void movePacman(const std::string &input, Data &data);
        static pacmanEngine& getInstance();
    private:
        std::vector<std::string> _updatedMap;
};


#endif /* !PACMAN_ENGINE_HPP */