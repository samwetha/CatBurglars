#include "Controller.h"
#include <iostream>

Controller::Controller()
{
	
}

Controller::~Controller(){

}

//Not used, delete if not needed
void Controller::assignController(int player, Cat *cat){
	if (player == 1)
	{
		mCat = cat;
	}
}

//Change position of cat with keyboard
void Controller::move(Cat *cat){
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		cat->move(0, -5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		cat->move(-5, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		cat->move(0, 5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		cat->move(5, 0);
	}
}