#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Player {
    private:
        // Player object
        sf::RectangleShape shape;

        float movementSpeed;

        // Init functions
        void initVariables();
        void initShape();

    public:
        // Constructors and desctuctors
        Player(float x = 0.f, float y = 0.f);
        ~Player();

        // Functions
        void updateInput();
        void updateWindowBoundsCollision(const sf::RenderTarget* target);
        void update(const sf::RenderTarget* target);
        void render(sf::RenderTarget* target);
};