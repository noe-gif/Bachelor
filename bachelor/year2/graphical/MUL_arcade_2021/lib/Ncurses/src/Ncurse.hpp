/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Ncurse
*/

#ifndef NCURSE_HPP_
#define NCURSE_HPP_
#include <string>
#include <iostream>
#include "curses.h"
#include "IDisplayModule.hpp"

class Ncurse : public IDisplayModule {
    public:
        Ncurse();
        virtual ~Ncurse();


        void display(Data &data) override;
        static Ncurse& getInstance();
        std::string getEvent() const override;
        void DisplayMenu(Data &data);
        void DisplayGame(Data &data);
        
        void stop(Data &data) override;
        void init(Data &data);

        WINDOW *Window;
        int WindowY;
        int WindowX;

        WINDOW *Menu;
        int MenuY;
        int MenuX;

        std::vector<std::string> games{"<- Nibbler ->", "<- PacMan ->"};
    protected:
    private:
        int indexGame;
        int instance;
        int counter;
        int randomValue;
};

#endif /* !NCURSE_HPP_ */
