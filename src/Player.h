#pragma once
#include "GameObject.h"

class Player: public GameObject {
	public:
		Player() : GameObject( "assets/char_player.png" ) {}
	
		void Update();
};
