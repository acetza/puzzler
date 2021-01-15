#ifndef GAME_ERROR_H
#define GAME_ERROR_H

typedef enum GameError GameError;

enum GameError { None, Initialization, Internal };

int game_error_code(GameError error);

#endif