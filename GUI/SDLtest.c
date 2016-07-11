/*Sean Kee*/
/*SDL Test*/
#include <stdio.h>
#include <SDL2/SDL.h>

typedef struct {
	int x, y;
	short life;
	char *name;
} Man;

int main(int argc, char *arg[]) {
	SDL_Window *window; /*Declare a window*/
	SDL_Renderer *renderer; /*Declare a renderer*/

	SDL_Init(SDL_INIT_VIDEO); /*Initialize SDL2*/

	/*Create an application window with the following settings:*/
	window = SDL_CreateWindow("Game Window", /*Window Title*/
			SDL_WINDOWPOS_UNDEFINED, /*Initial x position*/
			SDL_WINDOWPOS_UNDEFINED, /*Initial y position*/
			640, /*Width*/
			480, /*Height*/
			0 /*Flags*/
			);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); /*RGB, alpha*/

	SDL_RenderClear(renderer); /*Clears the window to the color set*/
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); /*Sets the next color*/

	SDL_Rect rect = {220, 140, 200, 200}; /*Create a Rectangle, using renderer pointer*/
	SDL_RenderFillRect(renderer, &rect); /*creates a filled rectange and stores it in renderer settings, and creates the rect Rectangle.*/

	SDL_RenderPresent(renderer); /*Presents the renderer(Displays on screen)*/

	SDL_Delay(2000); /*Waits 2 seconds*/

	SDL_DestroyWindow(window); /*Destroys the window*/
	SDL_DestroyRenderer(renderer); /*Destroys the renderer*/

	SDL_Quit(); /*Quits out of SDL*/

	return 0;
}
