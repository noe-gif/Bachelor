/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** display_module
*/

#ifndef IDiSPLAYMODULE_HPP
#define IDiSPLAYMODULE_HPP
#include <string>
#include <iostream>
#include "Data.hpp"

class IDisplayModule
{
    public:
        virtual ~IDisplayModule() = default;
        virtual std::string getEvent() const = 0;
        virtual void display(Data &data) = 0;

        virtual void stop(Data &data) = 0;
        virtual void init(Data &data) = 0;
};

#endif /* !IDiSPLAYMODULE_HPP */