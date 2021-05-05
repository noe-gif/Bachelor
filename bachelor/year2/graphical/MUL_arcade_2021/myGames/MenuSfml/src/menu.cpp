/*
** EPITECH PROJECT, 2021
** Menu
** File description:
** functions
*/

#include "menu.hpp"

Menu::Menu()
{
}

Menu::~Menu()
{
}

/* 
   ###################################################################
   #                                                                 #
   #                             menu engine                         #
   #                                                                 #
   ###################################################################
*/

void Menu::engine(const std::string &input, Data &data) 
{
    if (input == "P" && data.firstTime == false) {
    	data.removeInstance(1);
        data.index = 1;
    }
    if (data.index != 1) { 
        if ((input == "N" && data.firstTime == true) || (input == "N" && data.secondTime == true))
            data.setInstance(1);
    }
    if (input == "ENTER") {
		data.isGameLaunched = true;
    }
    if (input == "K") {
		data.isGameLaunched = true;
        data.setgameSelected("NAME");
    }
}

Menu& Menu::getInstance()
{
    static Menu instance;
    return (instance);
}

extern "C" Menu &entryPoint()
{
    return (Menu::getInstance());
}