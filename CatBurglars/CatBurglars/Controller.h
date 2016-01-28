#ifndef INCLUDED_CONTROLLER
#define INCLUDED_CONTROLLER

#include "Cat.h"

class Controller
{
public:
	Controller();
	~Controller();
	void assignController(int player, Cat *cat);
	void move(Cat *cat);
private:
	Cat *mCat;
};

#endif