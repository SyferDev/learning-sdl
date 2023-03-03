#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject() {
}

GameObject::GameObject( const char *spriteSheet ) {
	m_texture = TextureManager::LoadTexture( spriteSheet );
	
	m_srcRect.w = m_srcRect.h = 64;
	m_srcRect.x = m_srcRect.y = 0;
	
	m_destRect.w = m_srcRect.w * 2;
	m_destRect.h = m_srcRect.h * 2;
}

GameObject::~GameObject() {}

void GameObject::Update() {
	m_destRect.x = m_position.x;
	m_destRect.y = m_position.y;
}

void GameObject::Draw() {
	SDL_RenderCopy( Game::g_renderer, m_texture, &m_srcRect, &m_destRect );
}
