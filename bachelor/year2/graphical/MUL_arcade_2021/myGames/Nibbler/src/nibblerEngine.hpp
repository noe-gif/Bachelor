/*
** EPITECH PROJECT, 2021
** nibblerEngline
** File description:
** nibblerEngline
*/

#ifndef PACMAN_ENGINE_HPP
#define PACMAN_ENGINE_HPP
#include <string>
#include <iostream>
#include "IGameModule.hpp"
#include "Data.hpp"

class nibblerEngline : public IGameModule {
    public:
        nibblerEngline();
        virtual ~nibblerEngline();
        void engine(const std::string &input, Data &data);
        
        void moveNibbler(const std::string &input, Data &data);
        static nibblerEngline& getInstance();
    private:
        std::vector<std::string> _updatedMap;
};


#endif /* !PACMAN_ENGINE_HPP */