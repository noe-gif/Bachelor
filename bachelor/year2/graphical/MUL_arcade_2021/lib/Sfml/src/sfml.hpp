/*
** EPITECH PROJECT, 2021
** sfml
** File description:
** arcade
*/

#ifndef SFML_HPP
#define SFML_HPP
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "IDisplayModule.hpp"

class Sfml : public IDisplayModule {
    public:
        Sfml();
        virtual ~Sfml();

        /* important */
        std::string getEvent() const override;
    
        std::vector<sf::RectangleShape> parseWallsMap(std::vector<std::string> _map);
        sf::Text createGameTitle(std::string sentence);
        sf::Sprite createInfos();
        sf::Sprite createBackground();
        sf::RectangleShape createSelector(int posX, int posY);
        std::vector<sf::RectangleShape> createMenuShapes(std::vector<sf::RectangleShape> menuShapes);
        sf::Text createMyMenuTitle(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        std::vector<sf::Text> createMyMenuText(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts);
        sf::Text createMyTitle(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        std::vector<sf::Text> createMyTextVec(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts);
        sf::RectangleShape createWall(int posX, int posY);
        sf::RectangleShape createSmallWall(int posX, int posY);
        sf::RectangleShape createPacman(int posX, int posY);
        std::vector<sf::RectangleShape> parseNibblersMap(std::vector<std::string> _map);
        sf::RectangleShape createSmallSquare(int posX, int posY);
        sf::RectangleShape createSquare(int posX, int posY);
        sf::RectangleShape createNibbler(int posX, int posY);
        sf::Text createMyTitleNibbler(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        std::vector<sf::Text> createMyTextVecNibbler(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts);
        sf::Text createHighScoreText(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::Text createPacmanScoreText(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::Text createNibblerLine(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::Text createPacmanLine(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::RectangleShape createInvisibleWall(int posX, int posY);
        sf::Text createPacmanScoreInGame(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::Text createNibblerScoreInGame(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY);
        sf::RectangleShape createBerries(int posX, int posY);
        sf::Text displayPlayerName(std::string sentence);
        sf::Sprite createGrey();
        sf::Text displayPlayerNameM(std::string sentence);
        
        void display(Data &data) override;
        void stop(Data &data) override;
        void init(Data &data);
        static Sfml& getInstance();
    private:
        sf::Sprite pacman;
        sf::Event event;
        sf::RenderWindow window;
};

#endif /* !SFML_HPP */