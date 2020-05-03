#include "player.h"
#ifndef SCORE_H
#define SCORE_H

/**
 * Create basic variable definitions that can be used in various functions
 * However, the main focus is to have them as means to initialize struct Score
 * variables in Score.c
 */ 
#define APPLE 10
#define CHERRY 15
#define BANANA 20
#define WATERMELON 25

/**
 * Score structure that utilizes variables for how points are earned
 * and a multiplier to scale earned points based on difficulty
 */
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

/**
 * Difficulty function that assignes associated difficulty multiplier value
 * to multiplier (default value is 1): easy = 1, medium = 2, hard = 3
 * @param mode make call to struct Score multiplier to assign the diffiulty
 * multiplier value
 */
void easy(struct Score *mode);

/**
 * Difficulty function that assignes associated difficulty multiplier value
 * to multiplier (default value is 1): easy = 1, medium = 2, hard = 3
 * @param mode make call to struct Score multiplier to assign the diffiulty
 * multiplier value
 */
void medium(struct Score *mode);

/**
 * Difficulty function that assignes associated difficulty multiplier value
 * to multiplier (default value is 1): easy = 1, medium = 2, hard = 3
 * @param mode make call to struct Score multiplier to assign the diffiulty
 * multiplier value
 */
void hard(struct Score *mode);

/**
 * Point addition that is called when the snake collides the the corresponding
 * point value location. The Player currentScore accumulates points based on the
 * points earned (aka currentScore += points) point values are: Apple =10, Cherry =15
 * Banana = 20, Watermelon = 25
 * @param player Used to call player->currentScore with += points value
 * @param points Used to call points.fruit to add and update current score
 * @return Retuns the current player score for the snake game
 */
int apple_point(struct Player *player, struct Score points);

/**
 * Point addition that is called when the snake collides the the corresponding
 * point value location. The Player currentScore accumulates points based on the
 * points earned (aka currentScore += points) point values are: Apple =10, Cherry =15
 * Banana = 20, Watermelon = 25
 * @param player Used to call player->currentScore with += points value
 * @param points Used to call points.fruit to add and update current score
 * @return Retuns the current player score for the snake game
 */
int cherry_point(struct Player *player, struct Score points);

/**
 * Point addition that is called when the snake collides the the corresponding
 * point value location. The Player currentScore accumulates points based on the
 * points earned (aka currentScore += points) point values are: Apple =10, Cherry =15
 * Banana = 20, Watermelon = 25
 * @param player Used to call player->currentScore with += points value
 * @param points Used to call points.fruit to add and update current score
 * @return Retuns the current player score for the snake game
 */
int banana_point(struct Player *player, struct Score points);

/**
 * Point addition that is called when the snake collides the the corresponding
 * point value location. The Player currentScore accumulates points based on the
 * points earned (aka currentScore += points) point values are: Apple =10, Cherry =15
 * Banana = 20, Watermelon = 25
 * @param player Used to call player->currentScore with += points value
 * @param points Used to call points.fruit to add and update current score
 * @return Retuns the current player score for the snake game
 */
int watermelon_point(struct Player *player, struct Score points);

/**
 * Game over function to reset the current score and make it the high score
 * if current score is greater. Also resets multiplier to default value of 1
 * @param player Calls player->currentScore to reset it and player->highScore
 * to modify it if currentScore is greater
 * @param mode Calls mode->multiplier to reset multiplier to default value of 1
 */
void game_over(struct Player *player, struct Score *mode);

#endif