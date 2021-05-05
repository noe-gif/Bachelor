/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** core hpp
*/

#ifndef CORE_HPP
#define CORE_HPP
#include <string>
#include <iostream>

class Core {
    public :
        virtual ~Core() = default;
        virtual void init() = 0;
        virtual void stop() = 0;
        virtual const std::string &getName() const = 0;
};

#endif /* !CORE_HPP */