/*
** EPITECH PROJECT, 2021
** Menu
** File description:
** Menu
*/

#ifndef PACMAN_ENGINE_HPP
#define PACMAN_ENGINE_HPP
#include <string>
#include <iostream>
#include "IGameModule.hpp"
#include "Data.hpp"

class Menu : public IGameModule {
    public:
        Menu();
        virtual ~Menu();
        void engine(const std::string &input, Data &data);

        static Menu& getInstance();
    private:
        std::vector<std::string> _updatedMap;
};


#endif /* !PACMAN_ENGINE_HPP */