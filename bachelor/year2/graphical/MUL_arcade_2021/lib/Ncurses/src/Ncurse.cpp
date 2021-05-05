/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Ncurse
*/

#include "Ncurse.hpp"

Ncurse::Ncurse()
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    refresh();
    WindowY = getmaxy(stdscr);
    WindowX = getmaxx(stdscr);
    Window = newwin(WindowY, WindowX, 20, 50);
    MenuY = getmaxy(stdscr);
    MenuX = getmaxx(stdscr);
    Menu = newwin(MenuY, MenuX, 20, 50);
    counter = 0;
}

Ncurse::~Ncurse()
{
}

void Ncurse::stop(Data &data)
{
    // endwin();
    randomValue = data.getPacmanScore() - data.getPacmanScore();
    return;
}

void Ncurse::init(Data &data)
{
    randomValue = data.getPacmanScore();
    return;
}

void Ncurse::display(Data &data)
{
    if (data.isGameLaunched == false) {
        DisplayMenu(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "PACMAN") {
        DisplayGame(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "NIBBLER") {
        DisplayGame(data);
    } else if (data.isGameLaunched == true && data.gameSelected == "NAME") {
        data.setPlayerName("KOWAL");
    }
}

void Ncurse::DisplayMenu(Data &data)
{
        mvwprintw(Menu, 1, 1, "NAME:");
        mvwprintw(Menu, 2, 1, "%s", data.getPlayerName().c_str());
        mvwprintw(Menu, 1, 20, "Main Menu");
        mvwprintw(Menu, 2, 20, "Select a Game");
        mvwprintw(Menu, 3, 25, "%s", data.gameSelected.c_str());
        mvwprintw(Menu, 4, 20, "How To Play ?");
        mvwprintw(Menu, 6, 20, "ENTER : Start game");
        mvwprintw(Menu, 7, 20, "<- : Previous game");
        mvwprintw(Menu, 8, 20, "-> : Next game");
        mvwprintw(Menu, 9, 20, "TAB: Menu");
        mvwprintw(Menu, 10, 20, "ESC: Exit Arcade");
        mvwprintw(Menu, 11, 20, "P: Previous lib");
        mvwprintw(Menu, 12, 20, "N: Next lib");
        mvwprintw(Menu, 13, 20, "R: Reset");
        mvwprintw(Menu, 14, 20, "LATEST HIGH SCORE");
        mvwprintw(Menu, 15, 20, "PACMAN:");
        mvwprintw(Menu,15, 35, "%d", data.getPacmanScore());
        mvwprintw(Menu, 16, 20, "NIBBLER:");
        mvwprintw(Menu,16, 35, "%d", data.getNibblerScore());
        wrefresh(Menu);
        
        int key = getch();
        switch (key) {
            case 260:
                data.setgameSelected("PACMAN");
                break;
            case 261:
                data.setgameSelected("NIBBLER");
                break;
            case 'k':
                data.setgameSelected("NAME");
            default:
                break;
        }
    wrefresh(Menu);
}

void Ncurse::DisplayGame(Data &data)
{
    int score = 0;
    score = (data.gameSelected == "NIBBLER") ? data.getNibblerScore() : data.getPacmanScore();
    std::vector<std::string> map = (data.gameSelected == "NIBBLER") ? data.getNibblerMap() : data.getMap();
    mvwprintw(Window, 1, 50, "%d", score);
    mvwprintw(Window, 1, 43, "SCORE:");
    mvwprintw(Window, 1, 15, "%s", data.gameSelected.c_str());
    for (std::size_t i = 0; i < map.size(); i++)
        mvwprintw(Window, i + 3, 5, map[i].c_str());
    wrefresh(Window);
}

std::string Ncurse::getEvent() const
{
    std::string str;
    int key = getch();
    if (key == 'q')
        return("ESCAPE");
    switch (key) {
        case 260:
            return ("LEFT");
        case 261:
            return ("RIGHT");
        case 259:
            return ("UP");
        case 258:
            return ("DOWN");
        case 10:
            clear();
            return ("ENTER");
        case 'p':
            return ("P");
        case 'n':
            return ("N");
        case '\t':
            clear();
            return ("TAB");
        case 27:
            return ("ESCAPE");
        case 'r':
            return ("R");
        default:
            break;
    }
    wrefresh(Window);
    wrefresh(Menu);
    return str;
}

Ncurse& Ncurse::getInstance()
{
    static Ncurse instance;
    return (instance);
}

extern "C" Ncurse &entryPoint()
{
    return (Ncurse::getInstance());
}
