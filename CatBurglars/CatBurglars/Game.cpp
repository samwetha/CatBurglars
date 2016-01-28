#include "Game.h"
#include "TextureHandler.h"

static sf::RenderWindow *window;
static TextureHandler textures;

Game::Game() :
mEntities(),
mCat(),
mController()
{
	//Creates the main window
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();

	//Creates a cat(player)
	mCat = new Cat(textures.GetTexture(10), 50, 50, 1);
	//Stores Entities/objects
	mEntities.push_back(mCat);



}

Game::~Game()
{

}

void Game::Run(){
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}
		Update();
		Render();
	}
}

void Game::Update(){

	for each (Cat *cat in mEntities)
	{
		cout << "X : " << cat->GetPosition().x << endl;
		cout << "Y : " << cat->GetPosition().y << endl << endl;;
		//Enable keyboard for cat
		mController.move(cat);
	}

}

void Game::Render()
{
	/* Make background green for testing
	window->clear(sf::Color(0, 200, 0, 255));*/

	window->clear();

	//Render all entities into the window
	for each(Entity *entity in mEntities)
	{
		entity->Render(window);
	}
	window->display();
}