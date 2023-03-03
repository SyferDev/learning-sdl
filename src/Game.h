#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game {

public:
	Game();
	~Game();

	static SDL_Renderer *g_renderer;
	static SDL_Event g_event;

	void Init( const char *title, int x, int y, int w, int h, bool fullscreen );
	void PollEvents();
	void Update();
	void Render();
	void Clean();
	
	bool Running() {return m_isRunning; };
	
private:
	bool m_isRunning;
	SDL_Window *m_window;
	int m_ticks;
	
};
