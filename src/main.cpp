#include "Game.h"
#include <memory>

const char *GAME_TITLE = "Froggie";
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int TARGET_FPS = 60;
const int FRAME_DELAY = 1000 / TARGET_FPS;

int main( int argc, char *args[] ) {
  
  Uint32 frameStart;
  int frameTime;
  
  std::unique_ptr<Game> game = std::make_unique<Game>();
  game->Init( GAME_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, false );
  
  while ( game->Running() ) {
    
    frameStart = SDL_GetTicks();
    
    game->PollEvents();
    game->Update();
    game->Render();
    
    frameTime = SDL_GetTicks() - frameStart;
    
    if ( FRAME_DELAY > frameTime ) {
      SDL_Delay( FRAME_DELAY - frameTime );
    }
  }
  
  return 0;
}  
  
