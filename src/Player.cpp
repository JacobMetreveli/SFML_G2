#include "../include/Player.h"
#include "Player.h"


// Init functions
void Player::initVariables()
{
    this->movementSpeed = 10.f;
}

void Player::initShape() 
{
    this->shape.setFillColor(sf::Color::Green);
    this->shape.setSize(sf::Vector2f(50.f, 50.f));
}


// Constructors and Destructors
Player::Player(float x, float y)
{
    this->shape.setPosition(x, y);

    this->initVariables();
    this->initShape();
}

Player::~Player() 
{

}


// Functions
void Player::updateInput()
{
    sf::Vector2f position = this->shape.getPosition();
    // Keyboard input
    //Left
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && position.x >= 0) {
        this->shape.move(-this->movementSpeed, 0.f);
    }
    //Right
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && position.x <= 750) {
        this->shape.move(this->movementSpeed, 0.f);
    }
    //Up
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && position.y >= 0) {
        this->shape.move(0.f, -this->movementSpeed);
    }
    //Down
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && position.y <= 550) {
        this->shape.move(0.f, this->movementSpeed);
    }    
    
}

void Player::updateWindowBoundsCollision(const sf::RenderTarget *target)
{
    //Left
    if (this->shape.getGlobalBounds().left <= 0.f)
}

void Player::update(const sf::RenderTarget *target)
{
    // Window bounds collision
    this->updateWindowBoundsCollision(target);

    this->updateInput();
}


void Player::render(sf::RenderTarget *target)
{
    target->draw(this->shape);
}
