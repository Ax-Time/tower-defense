#include <iostream>
#include <cmath>
#include <string>

#include "entity.hpp"
#include "vec2.hpp"
#include "c_transform.hpp"

//Screen dimension constants
// const int SCREEN_WIDTH = 1920;
// const int SCREEN_HEIGHT = 1080;

int main( int argc, char* args[] )
{
	// //The window we'll be rendering to
	// SDL_Window* window = NULL;
	
	// //The surface contained by the window
	// SDL_Surface* screenSurface = NULL;

	// //Initialize SDL
	// SDL_Init(SDL_INIT_EVERYTHING);

    // //Create window
    // window = SDL_CreateWindow("Tower Defense", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		
    // //Get window surface
    // screenSurface = SDL_GetWindowSurface(window);

    // //Fill the surface white
    // SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF ));
    
    // //Update the surface
    // SDL_UpdateWindowSurface(window);
    
    // //Hack to get window to stay up
    // SDL_Event e;
    // bool quit = false;
    // while(quit == false) { while(SDL_PollEvent(&e)) { if(e.type == SDL_QUIT) quit = true; } }

	// //Destroy window
	// SDL_DestroyWindow(window);

	// //Quit SDL subsystems
	// SDL_Quit();


    // Test
    auto a = Vec2(1, 2);
    auto b = Vec2(3, 4);
    auto c = Vec2(5, 6);
    auto d = Vec2(1, 1);
    std::string str = std::string("culo");
    auto tr = TransformC(str, a, b, c, d);

    auto temp = Vec2(1,1);
    tr.translate(temp);
    std::cout << "oke" << std::endl;

    tr.pos.x += 1;

    std::cout << std::string(a) << '\t' << std::string(tr.pos) << std::endl;

	return 0;
}

/*

Entity
--> type
--> UUID

Component
--> &Entity

*/