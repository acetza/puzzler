#include "game_manager.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "game_error.h"

///////////////////////////////////////////////////////////////////////////////////////////////
/*
struct GameManager {
  size_t height;
  size_t width;
  SDL_Window *window;
  SDL_Renderer *renderer;
};
*/

/*
///////////////////////////////////////////////////////////////////////////////////////////////

void game_manager_handle_error(GameManager *manager, GameError error);

GameError game_manager_initialize(GameManager *manager);

void game_manager_enter_loop(GameManager *manager);

void game_manager_draw(GameManager *manager);

void game_manager_finalize(GameManager *manager);

void game_manager_main_loop(GameManager *manager);


///////////////////////////////////////////////////////////////////////////////////////////////

void game_manager_handle_error(GameManager *manager, GameError error) {
  if (error != None) {
    game_manager_finalize(manager);
    exit(game_error_code(error));
  }
}

GameError game_manager_initialize(GameManager *manager) {
  manager->height = 512;
  manager->width = manager->height * 2;
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    return Initialization;
  }
  manager->window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                                     SDL_WINDOWPOS_UNDEFINED, manager->width,
                                     manager->height, SDL_WINDOW_HIDDEN);
  if (manager->window == NULL) {
    printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    return Initialization;
  }
  manager->renderer =
      SDL_CreateRenderer(manager->window, -1,
                         SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (manager->renderer == NULL) {
    printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
    return Initialization;
  }
  return None;
}

void game_manager_finalize(GameManager *manager) {
  SDL_DestroyRenderer(manager->renderer);
  SDL_DestroyWindow(manager->window);
  SDL_Quit();
}

int game_manager_start() {
  printf("Welcome to puzzler\n");
  GameManager manager;
  GameError error = game_manager_initialize(&manager);
  game_manager_handle_error(&manager, error);
  game_manager_enter_loop(&manager);
  game_manager_finalize(&manager);
  return game_error_code(None);
}

void game_manager_enter_loop(GameManager *manager) {
  game_manager_draw(manager);
  SDL_ShowWindow(manager->window);
  game_manager_main_loop(manager);
}

void game_manager_draw(GameManager *manager) {
  printf("drawing\n");
  int sdl_error_code = SDL_SetRenderDrawColor(manager->renderer, 255, 0, 128, 255);
  if (sdl_error_code < 0 ) {
    printf("SDL_SetRenderDrawColor! SDL_Error: %s\n", SDL_GetError());
    game_manager_handle_error(manager, Internal);
  }
  sdl_error_code = SDL_RenderClear(manager->renderer);
  if (sdl_error_code < 0 ) {
    printf("SDL_RenderClear! SDL_Error: %s\n", SDL_GetError());
    game_manager_handle_error(manager, Internal);
  }
}

void game_manager_main_loop(GameManager *manager) {
  SDL_Event event;
  bool must_continue = true;
  while (must_continue) {
    game_manager_draw(manager);
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        must_continue = false;
      }
    }
  }
}
*/