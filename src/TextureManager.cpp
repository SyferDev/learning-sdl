#include "TextureManager.h"

SDL_Texture *TextureManager::LoadTexture( const char *path ) {
	SDL_Surface *surface = IMG_Load( path );
	SDL_Texture *tex = SDL_CreateTextureFromSurface( Game::g_renderer, surface );
	SDL_FreeSurface( surface );
	
	return tex;
}