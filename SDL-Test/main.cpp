#include "SDL.h" 

int main(int argc, char *argv[]) {
	//Initialisation vid�o
	SDL_Init(SDL_INIT_VIDEO); 
	//Cr�ation de la fen�tre 
	SDL_Window *window = SDL_CreateWindow("Projet SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); 
	//Cr�ation du renderer sur la fen�tre
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	//Renderer en bleue et compl�tement visible
	SDL_SetRenderDrawColor(renderer, 0, 0, 200, 255);

	SDL_RenderClear(renderer);
	
	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return 0;
}