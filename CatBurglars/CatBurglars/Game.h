#ifndef INCLUDED_GAME
#define INCLUDE_GAME

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "GameObject.h"
#include "Cat.h"
#include "Controller.h"

class Game
{
public:
	typedef std::vector<Entity*> EntityVector;
	Game();
	~Game();
	void Run();
private:
	void Update();
	void Render();
	EntityVector mEntities;
	GameObject *mGameObjectives;
	Cat *mCat;
	Controller mController;
};

#endif