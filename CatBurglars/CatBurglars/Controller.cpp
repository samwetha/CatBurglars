#include "Controller.h"
#include <iostream>

Controller::Controller()
{
	
}

Controller::~Controller(){

}

//Not used, delete if not needed - no, might need it in future
void Controller::assignController(int player, Cat *cat){


	if (player == 0)
		{
			mCat = cat;
		}
	/*	if (player == 1)
		{
			mCat = cat;
		}
*/

	
}



//Change position of cat with keyboard
void Controller::move(Cat *cat){

	using namespace sf;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W));
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







/* ska ha för kontroller sen
void Controller::move(Cat *cat)
{
	using namespace sf;
	
	if (bool hasZ = sf::Joystick::hasAxis(0, sf::Joystick::Z)){
		float x = Joystick::getAxisPosition(0, Joystick::X);


		float y = Joystick::getAxisPosition(0, Joystick::Y);
		cat->move(x, y);
		}
	else{
	//måste ändra knapparna, då jag inte vet vilken knapp som har vilket ID
		
			if (Joystick::isButtonPressed(0, 1)){
				cat->move(5, 0);
			}
			if (Joystick::isButtonPressed(0, 2)){
				cat->move(-5, 0);
			}
			if (Joystick::isButtonPressed(0, 3)){
				cat->move(0, 5);
			}
			if (Joystick::isButtonPressed(0, 4)){
				cat->move(0, -5);
			}
		}
	}
	

	*/