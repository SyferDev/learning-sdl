#include "Game.h"
#include "Player.h"

Player *player;

SDL_Renderer *Game::g_renderer = nullptr;
SDL_Event Game::g_event;

Game::Game() {
}

Game::~Game() {
	SDL_DestroyWindow( m_window );
	SDL_DestroyRenderer( g_renderer );
	SDL_Quit();
	std::cout << "Game cleaned" << std::endl;	
}

void Game::Init( const char *title, int x, int y, int w, int h, bool fullscreen ) {
	if ( SDL_Init( SDL_INIT_EVERYTHING ) == 0 ) {
		std::cout << "Core initialized... " << std::endl;
		
		m_window = SDL_CreateWindow( title, x, y, w, h, fullscreen ? SDL_WINDOW_FULLSCREEN : SDL_WINDOW_MAXIMIZED );
		
		if ( m_window ) std::cout << "Window created!" << std::endl;
		
		g_renderer = SDL_CreateRenderer( m_window, -1, 0 );
		
		if ( g_renderer ) {
			std::cout << "Renderer created!" << std::endl;
			
			SDL_SetRenderDrawColor( g_renderer, 255, 255, 255, 255 );
		}
		
		m_isRunning = true;
	}
	
	player = new Player();	
} 

void Game::PollEvents() {
	
	SDL_PollEvent( &g_event );
	
	switch ( g_event.type ) {
		case SDL_QUIT:
			m_isRunning = false;
			break;
		
		default:
			break;
	}
}

void Game::Update() {
	m_ticks++;

	player->Update();
}

void Game::Render() {
	SDL_RenderClear( g_renderer );
	
	player->Draw();
	
	SDL_RenderPresent( g_renderer );
}
