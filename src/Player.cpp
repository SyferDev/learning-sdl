#include "Player.h"

void Player::Update() {
  int x, y;
  
  SDL_GetGlobalMouseState( &x, &y );
  
  m_position.x = x;
  m_position.y = y;
   
  GameObject::Update();
}