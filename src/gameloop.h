#pragma once

#include <SDL2/SDL.h>
#include "utility.h"
#include "structs.h"
#include "gui.h"
#include "terrain.h"
#include "textures.h"

int gameLoop(
  unsigned int seed,
  Inputs *inputs,
  World *world,
  SDL_Renderer *renderer
);
