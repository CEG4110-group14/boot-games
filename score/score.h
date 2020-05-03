#include "player.h"
#ifndef SCORE_H
#define SCORE_H

#define APPLE 10
#define CHERRY 15
#define BANANA 20
#define WATERMELON 25

struct Score {
int multiplier;
int apple;
int cherry;
int banana;
int watermelon; 
};

/**
* Initializes scoring variables for game start
* @param scoreStart refernces struct Score to initialize scoring values and multiplier
*/
void score_init(struct Score *scoreStart);

void easy(struct Score *mode);
void medium(struct Score *mode);
void hard(struct Score *mode);

int apple_point(struct Player *player, struct Score points);
int cherry_point(struct Player *player, struct Score points);
int banana_point(struct Player *player, struct Score points);
int watermelon_point(struct Player *player, struct Score points);

void game_over(struct Player *player, struct Score *mode);

#endif