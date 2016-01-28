#ifndef TILE_H
#define TILE_H

#include "Entity.h"
#include "TextureHandler.h"

class Tile : public Entity
{
public:
	Tile(sf::Vector2i position, int ID, int textureID, TextureHandler *textures);
	~Tile();
	void Render(sf::RenderWindow *mainWindow);
	void Update();
	//Added
	sf::Vector2i GetPosition();
	static sf::Vector2i GetSize();
	static void IDChangeInfo(int ID, bool allowed);
	int GetID();
private:
	int mID = 0;

	//Added
	sf::Sprite mSprite;
	sf::Vector2i mPosition;
};

#endif