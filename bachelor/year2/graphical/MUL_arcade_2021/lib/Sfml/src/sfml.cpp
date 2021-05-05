/*
** EPITECH PROJECT, 2021
** sfml
** File description:
** functions
*/

#include "sfml.hpp"

Sfml::Sfml()
{
}

Sfml::~Sfml()
{
}

void Sfml::stop(Data &data)
{
    data.openW = 0;
    window.close();
}

void Sfml::init(Data &data)
{
    if (data.openW == 1 || data.index == 1) {
        window.create(sf::VideoMode(1200, 900), "SFML window");
        data.index = 0;
    }
    data.openW = 0;
    return;
}

/* 
   ###################################################################
   #                                                                 #
   #                             MENU                                #
   #                                                                 #
   ###################################################################
*/

sf::Text Sfml::displayPlayerNameM(std::string sentence)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(30);
    text.setPosition(450, 360);
    text.setFillColor(sf::Color::White);
    return (text);
}

sf::Text Sfml::displayPlayerName(std::string sentence)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(23);
    text.setPosition(470, 155);
    text.setFillColor(sf::Color(255,165,0));
    return (text);
}

sf::Text Sfml::createGameTitle(std::string sentence)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(23);
    text.setPosition(470, 240);
    text.setFillColor(sf::Color::Green);
    return (text);
}


sf::Sprite Sfml::createGrey()
{
    static sf::Texture texture2;
    texture2.loadFromFile("assets/sprites/grey.png");
    static sf::Sprite inffos(texture2);
    inffos.setPosition(10, 10);
    return (inffos);
}
sf::Sprite Sfml::createInfos()
{
    static sf::Texture texture2;
    texture2.loadFromFile("assets/sprites/infos.png");
    static sf::Sprite inffos(texture2);
    inffos.setPosition(380, 75);
    return (inffos);
}

sf::Sprite Sfml::createBackground()
{
    static sf::Texture texture;
    texture.loadFromFile("assets/sprites/background.jpg");
    static sf::Sprite background(texture);
    return (background);
}

sf::RectangleShape Sfml::createSelector(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 20));
    rectangle.setSize(sf::Vector2f(400, 900));
    rectangle.setPosition(posX, posY);
    rectangle.setFillColor(sf::Color::Black);
    return rectangle;
}

std::vector<sf::RectangleShape> Sfml::createMenuShapes(std::vector<sf::RectangleShape> menuShapes)
{
    menuShapes.push_back(createSelector(330, 125));
    return (menuShapes);
}

sf::Text Sfml::createMyMenuTitle(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Cyan);
    return (text);
}

std::vector<sf::Text> Sfml::createMyMenuText(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts)
{
    for (auto it = sentences.cbegin(); it != sentences.cend(); ++it)
        texts.push_back(createMyMenuTitle(it->first, 70, it->second.first, it->second.second));
    return (texts);
}

/* 
   ###################################################################
   #                                                                 #
   #                             SCORE                               #
   #                                                                 #
   ###################################################################
*/

sf::Text Sfml::createHighScoreText(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Red);
    return (text);
}

sf::Text Sfml::createNibblerLine(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color(255,165,0));
    return (text);
}

sf::Text Sfml::createPacmanLine(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Yellow);
    return (text);
}

sf::Text Sfml::createPacmanScoreText(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Red);
    return (text);
}


/* 
   ###################################################################
   #                                                                 #
   #                             TEXT                                #
   #                                                                 #
   ###################################################################
*/

sf::Text Sfml::createMyTitle(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/pacman1.TTF");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Yellow);
    return (text);
}

std::vector<sf::Text> Sfml::createMyTextVec(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts)
{
    for (auto it = sentences.cbegin(); it != sentences.cend(); ++it)
        texts.push_back(createMyTitle(it->first, 40, it->second.first, it->second.second));
    return (texts);
}

/* 
   ###################################################################
   #                                                                 #
   #                             NIBBLER                             #
   #                                                                 #
   ###################################################################
*/

sf::RectangleShape Sfml::createNibbler(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(25, 29));
    rectangle.setPosition(posX, posY);
    rectangle.setFillColor(sf::Color::Red);
    return rectangle;
}

sf::RectangleShape Sfml::createSquare(int posX, int posY) {
    sf::Color brown(165,42,42);

    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(25, 29));
    rectangle.setPosition(posX, posY);
    rectangle.setFillColor(brown);
    return rectangle;
}

sf::RectangleShape Sfml::createBerries(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(15, 15));
    rectangle.setPosition(posX + 12, posY + 15);
    rectangle.setFillColor(sf::Color::Green);
    return rectangle;
}

sf::RectangleShape Sfml::createSmallSquare(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(2, 2));
    rectangle.setPosition(posX + 12, posY + 15);
    rectangle.setFillColor(sf::Color::Green);
    return rectangle;
}

std::vector<sf::RectangleShape> Sfml::parseNibblersMap(std::vector<std::string> _map)
{
    int posX = 0;
    int posY = 100;
    std::vector<sf::RectangleShape> rectangles;

    for (std::size_t i = 0; i < _map.size(); i++) {
        for (std::size_t y = 0; y < _map[i].size(); y++) {
            if (_map[i][y] == '#') {
                rectangles.push_back(createSquare(posX, posY));
                posX += 25;
            } else if (_map[i][y] == 'P') {
                rectangles.push_back(createNibbler(posX, posY));
                posX += 25;
            }  else if (y < _map[i].size() - 1 && _map[i][y] == '.') {
                rectangles.push_back(createSmallWall(posX, posY));
                posX += 25;
            } else if (_map[i][y] == ' ') {
                rectangles.push_back(createInvisibleWall(posX, posY));
                posX += 25;
            } else if (_map[i][y] == 'O') {
                rectangles.push_back(createBerries(posX, posY));
                posX += 25;
            }
        }
        posX = 0;
        posY += 30;
    }
    return (rectangles);
}

sf::Text Sfml::createMyTitleNibbler(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.TTF");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color(255,165,0));
    return (text);
}

std::vector<sf::Text> Sfml::createMyTextVecNibbler(std::map<std::string, std::pair<std::size_t, std::size_t>> sentences, std::vector<sf::Text> texts)
{
    for (auto it = sentences.cbegin(); it != sentences.cend(); ++it)
        texts.push_back(createMyTitleNibbler(it->first, 40, it->second.first, it->second.second));
    return (texts);
}

/* 
   ###################################################################
   #                                                                 #
   #                             PACMAN                              #
   #                                                                 #
   ###################################################################
*/

sf::RectangleShape Sfml::createPacman(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(20, 29));
    rectangle.setPosition(posX, posY);
    rectangle.setFillColor(sf::Color::Yellow);
    return rectangle;
}

sf::Text Sfml::createPacmanScoreInGame(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color::Yellow);
    return (text);
}

sf::Text Sfml::createNibblerScoreInGame(std::string sentence, std::size_t size, std::size_t posX, std::size_t posY)
{
    static sf::Text text;
    static sf::Font font;

    font.loadFromFile("assets/fonts/arcade.ttf");
    text.setFont(font);
    text.setString(sentence);
    text.setCharacterSize(size);
    text.setPosition(posX, posY);
    text.setFillColor(sf::Color(255,165,0));
    return (text);
}

/* 
   ###################################################################
   #                                                                 #
   #                             WALLS                               #
   #                                                                 #
   ###################################################################
*/

sf::RectangleShape Sfml::createWall(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(25, 29));
    rectangle.setPosition(posX, posY);
    rectangle.setFillColor(sf::Color::Blue);
    return rectangle;
}

sf::RectangleShape Sfml::createSmallWall(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(2, 2));
    rectangle.setPosition(posX + 12, posY + 15);
    rectangle.setFillColor(sf::Color(255,165,0));
    return rectangle;
}

sf::RectangleShape Sfml::createInvisibleWall(int posX, int posY) {
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setSize(sf::Vector2f(0, 0));
    rectangle.setPosition(posX + 12, posY + 15);
    rectangle.setFillColor(sf::Color::White);
    return rectangle;
}

std::vector<sf::RectangleShape> Sfml::parseWallsMap(std::vector<std::string> _map)
{
    int posX = 0;
    int posY = 100;
    std::vector<sf::RectangleShape> rectangles;

    for (std::size_t i = 0; i < _map.size(); i++) {
        for (std::size_t y = 0; y < _map[i].size(); y++) {
            if (_map[i][y] == '#') {
                rectangles.push_back(createWall(posX, posY));
                posX += 25;
            } else if (_map[i][y] == 'P') {
                rectangles.push_back(createPacman(posX, posY));
                posX += 25;
            }  else if (y < _map[i].size() - 1 && _map[i][y] == '.') {
                rectangles.push_back(createSmallWall(posX, posY));
                posX += 25;
            } else if (_map[i][y] == ' ') {
                rectangles.push_back(createInvisibleWall(posX, posY));
                posX += 25;
            }
        }
        posX = 0;
        posY += 30;
    }
    return (rectangles);
}

/* 
   ###################################################################
   #                                                                 #
   #                             DISPLAY                             #
   #                                                                 #
   ###################################################################
*/

std::string Sfml::getEvent() const
{
    std::string str;
    if (event.type == sf::Event::Closed)
        return ("ESC");
    if (event.type == sf::Event::KeyPressed) {
        switch (event.key.code) {
            case sf::Keyboard::Up:
                return ("UP");
            case sf::Keyboard::Down:
                return ("DOWN");
            case sf::Keyboard::Left:
                return ("LEFT");
            case sf::Keyboard::Right:
                return ("RIGHT");
            case sf::Keyboard::Escape:
                return ("ESCAPE");
            case sf::Keyboard::Enter:
                return ("ENTER");
            case sf::Keyboard::Q:
                return ("Q");
            case sf::Keyboard::D:
                return ("D");
            case sf::Keyboard::M:
                return ("M");
            case sf::Keyboard::P:
                return ("P");
            case sf::Keyboard::N:
                return ("N");
            case sf::Keyboard::R:
                return ("R");
            case sf::Keyboard::K:
                return ("K");
            case sf::Keyboard::Tab:
                return ("TAB");
            default:
                break;
        }
    }
    return str;
}

void Sfml::display(Data &data)
{
    static std::map<std::string, std::pair<std::size_t, std::size_t>> arcadeTitle =
    {
        { "ARCADE", std::make_pair(340, 10) }
    };
    std::vector<sf::RectangleShape> rectangles = this->parseWallsMap(data.getMap());
    static std::vector<sf::RectangleShape> menuShapes = this->createMenuShapes(menuShapes);
    std::vector<sf::RectangleShape> nibblerSquares = this->parseNibblersMap(data.getNibblerMap());
    
    static std::vector<sf::Text> texts = this->createMyTextVec(data.getText(), texts);
    static std::vector<sf::Text> nibblerTexts = this->createMyTextVecNibbler(data.getNibblerText(), nibblerTexts);
    static sf::Text HighScore = createHighScoreText("LAST HIGH SCORE", 23, 400, 520);
    static sf::Text pacmanLine = createNibblerLine("PACMAN", 23, 400, 570);
    static sf::Text nibblerLine = createPacmanLine("NIBBLER", 23, 400, 620);
    sf::Text nameDisplay = displayPlayerName(data.getPlayerName());
    sf::Text nameM = displayPlayerNameM(data.getPlayerName());
    sf::Text scorePacman = createPacmanScoreText(std::to_string(data.getPacmanScore()), 23, 550, 570);
    sf::Text scoreNibbler = createPacmanScoreText(std::to_string(data.getNibblerScore()), 23, 550, 620);

    sf::Text scorePacmanIn = createPacmanScoreInGame(std::to_string(data.getPacmanScore()), 40, 260, 522);
    sf::Text scoreNibblerIn = createNibblerScoreInGame(std::to_string(data.getNibblerScore()), 40, 240, 720);

    static std::vector<sf::Text> menuTexts = this->createMyMenuText(arcadeTitle, menuTexts);
    static sf::Sprite background = this->createBackground();
    static sf::Sprite grey = this->createGrey();
    static sf::Sprite infos = this->createInfos();
    static sf::Text whichGameTitle = this->createGameTitle("PACMAN");

    // while (window.isOpen()) {
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
        if (event.type == sf::Event::KeyPressed)
        {
            if (event.key.code == sf::Keyboard::Q) {
                whichGameTitle = this->createGameTitle("PACMAN");
                if (data.isGameLaunched == false)
                    data.setgameSelected("PACMAN");
            }
            if (event.key.code == sf::Keyboard::D) {
                if (data.isGameLaunched == false)
                    data.setgameSelected("NIBBLER");
                whichGameTitle = this->createGameTitle("NIBBLER");
            }
            if (event.key.code == sf::Keyboard::Left)
                break;
            if (event.key.code == sf::Keyboard::Right)
                break;
            if (event.key.code == sf::Keyboard::Escape)
                break;
            if (event.key.code == sf::Keyboard::Enter)
                break;
            if (data.isGameLaunched == true && data.gameSelected == "NAME") {
                switch (event.key.code) {
                    case sf::Keyboard::Tab:
                        data.isGameLaunched = false;
                        break;
                    case sf::Keyboard::A:
                        data.setPlayerName("A");
                        break;
                    case sf::Keyboard::B:
                        data.setPlayerName("B");
                        break;
                    case sf::Keyboard::C:
                        data.setPlayerName("C");
                        break;
                    case sf::Keyboard::D:
                        data.setPlayerName("D");
                        break;
                    case sf::Keyboard::E:
                        data.setPlayerName("E");
                        break;
                    case sf::Keyboard::F:
                        data.setPlayerName("F");
                        break;
                    case sf::Keyboard::G:
                        data.setPlayerName("G");
                        break;
                    case sf::Keyboard::H:
                        data.setPlayerName("H");
                        break;
                    case sf::Keyboard::I:
                        data.setPlayerName("I");
                        break;
                    case sf::Keyboard::J:
                        data.setPlayerName("J");
                        break;
                    case sf::Keyboard::K:
                        data.setPlayerName("K");
                        break;
                    case sf::Keyboard::L:
                        data.setPlayerName("L");
                        break;
                    case sf::Keyboard::M:
                        data.setPlayerName("M");
                        break;
                    case sf::Keyboard::N:
                        data.setPlayerName("N");
                        break;
                    case sf::Keyboard::O:
                        data.setPlayerName("O");
                        break;
                    case sf::Keyboard::P:
                        data.setPlayerName("P");
                        break;
                    case sf::Keyboard::Q:
                        data.setPlayerName("Q");
                        break;
                    case sf::Keyboard::R:
                        data.setPlayerName("R");
                        break;
                    case sf::Keyboard::S:
                        data.setPlayerName("S");
                        break;
                    case sf::Keyboard::T:
                        data.setPlayerName("T");
                        break;
                    case sf::Keyboard::U:
                        data.setPlayerName("U");
                        break;
                    case sf::Keyboard::V:
                        data.setPlayerName("V");
                        break;
                    case sf::Keyboard::W:
                        data.setPlayerName("W");
                        break;
                    case sf::Keyboard::X:
                        data.setPlayerName("X");
                        break;
                    case sf::Keyboard::Y:
                        data.setPlayerName("Y");
                        break;
                    case sf::Keyboard::Z:
                        data.setPlayerName("Z");
                        break;
                    case sf::Keyboard::Space:
                        data.setPlayerName("  ");
                        break;
                    case sf::Keyboard::Unknown:
                        break;
                    case sf::Keyboard::BackSpace:
                        data.removeLplayerName();
                        break;
                    default:
                        break;
                }
            }
            if (event.key.code == sf::Keyboard::M)
                break;
            if (event.key.code == sf::Keyboard::P)
                break;
            if (event.key.code == sf::Keyboard::N)
                break;
            if (event.key.code == sf::Keyboard::R)
                break;
            if (event.key.code == sf::Keyboard::K)
                break;
            if (event.key.code == sf::Keyboard::Up)
                break;
            if (event.key.code == sf::Keyboard::Down)
                break;
            if (event.key.code == sf::Keyboard::Comma)
                break;
            if (event.key.code == sf::Keyboard::Tab)
                break;
        }
    }
    window.clear();
    if (data.isGameLaunched == false) {
        window.draw(background);
        for (std::size_t i = 0; i < menuShapes.size(); i++)
            window.draw(menuShapes[i]);
        for (std::size_t i = 0; i < menuTexts.size(); i++)
            window.draw(menuTexts[i]);
        window.draw(infos);
        window.draw(HighScore);
        window.draw(scorePacman);
        window.draw(scoreNibbler);
        window.draw(pacmanLine);
        window.draw(nibblerLine);
        window.draw(whichGameTitle);
        window.draw(nameDisplay);
    } else if (data.isGameLaunched == true && data.gameSelected == "PACMAN") {
        for (std::size_t i = 0; i < texts.size(); i++)
            window.draw(texts[i]);
        for (std::size_t i = 0; i < rectangles.size(); i++)
            window.draw(rectangles[i]);
        window.draw(scorePacmanIn);
    } else if (data.isGameLaunched == true && data.gameSelected == "NIBBLER") {
        for (std::size_t i = 0; i < nibblerTexts.size(); i++)
            window.draw(nibblerTexts[i]);
        for (std::size_t i = 0; i < nibblerSquares.size(); i++)
            window.draw(nibblerSquares[i]);
        window.draw(scoreNibblerIn);
    } else if (data.isGameLaunched == true && data.gameSelected == "NAME") {
        window.draw(grey);
        window.draw(nameM);
    }
    window.display();
    // }
}

Sfml& Sfml::getInstance()
{
    static Sfml instance;
    return (instance);
}

extern "C" Sfml &entryPoint()
{
    return (Sfml::getInstance());
}