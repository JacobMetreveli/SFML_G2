#include "../include/Game.h"



void Game::initVariables()
{
    this->endGame = false;
}


void Game::initWindow()
{
    this->videMode = sf::VideoMode(800, 600);
    this->window = new sf::RenderWindow(videMode, "Game 2", sf::Style::Close | sf::Style::Titlebar);
    this->window->setFramerateLimit(60);
}

// Constructors and Destructors
Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}


// Functions
const bool Game::running() const
{
    return this->window->isOpen();
}


void Game::pollEvents()
{
    while (this->window->pollEvent(sfmlEvent)) {
        switch (this->sfmlEvent.type) {
            case sf::Event::Closed:
                this->window->close();
                break;

            case sf::Event::KeyPressed:
                if (this->sfmlEvent.key.code == sf::Keyboard::Escape)
                    this->window->close();
                break;

            default:
                break;
        }
    }
}


void Game::update()
{
    this->pollEvents();

    this->player.update(this->window);
}


void Game::render()
{
    // Clear old frame
    this->window->clear();

    // Render stuff
    this->player.render(this->window);

    this->window->display();
}
