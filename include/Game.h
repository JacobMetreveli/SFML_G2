#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#include "../include/Player.h"

class Game {
    private:
        sf::VideoMode videMode;
        sf::RenderWindow* window;
        bool endGame;
        sf::Event sfmlEvent;

        Player player;

        void initVariables();
        void initWindow();

    public:
        // Constructors and Destructors
        Game();
        ~Game();

        // Accessors


        // Modifiers


        // Functions
        const bool running() const;
        void pollEvents();

        void update();
        void render();
};