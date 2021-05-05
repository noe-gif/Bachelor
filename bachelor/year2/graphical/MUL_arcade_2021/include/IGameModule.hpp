/*
** EPITECH PROJECT, 2021
** Igamemodule
** File description:
** arcade
*/

#ifndef IGAMEDISPLAYMODULE_HPP
#define IGAMEDISPLAYMODULE_HPP
#include <string>
#include <iostream>
#include "Data.hpp"

class IGameModule
{
    public:
        virtual ~IGameModule() = default;
        virtual void engine(const std::string &input, Data &data) = 0;
};

#endif /* !IGAMEDISPLAYMODULE_HPP */
