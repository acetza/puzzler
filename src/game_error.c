#include "game_error.h"

int game_error_code(GameError error) {
  switch (error) {
    case None:
      return 0;
    case Initialization:
      return 1;
    case Internal:
      return 2;
  }
  return -1;
}