#pragma once
#include "Game.h"
#include "engine/vec.h"

class GameObject {

public:
	GameObject();
	GameObject( const char *spriteSheet );
	~GameObject();
	
	virtual void Update();
	virtual void Draw();
	
protected:
	Vec2 m_position;

private:
	SDL_Texture *m_texture;
	SDL_Rect m_srcRect, m_destRect;
	
};
