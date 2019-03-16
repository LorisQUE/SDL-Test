#include "SDL.h" 

int main(int argc, char *argv[]) {
	//Initialisation vidéo
	SDL_Init(SDL_INIT_VIDEO); 
	//Création de la fenêtre 
	SDL_Window *window = SDL_CreateWindow("Projet SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); 
	//Création du renderer sur la fenêtre
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	//Renderer en bleue et complétement visible
	SDL_SetRenderDrawColor(renderer, 0, 0, 200, 255);

	SDL_RenderClear(renderer);
	
	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return 0;
}