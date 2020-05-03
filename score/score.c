#include "score.h"
#include "player.h"

void score_init(struct Score *scoreStart)
{
    scoreStart->apple = APPLE;
    scoreStart->cherry = CHERRY;
    scoreStart->banana = BANANA;
    scoreStart->watermelon = WATERMELON;
    scoreStart->multiplier = 1.0;
}

void easy(struct Score *mode)
{ 
    mode->multiplier = 1.0;
    return;
}

void medium(struct Score *mode)
{
    mode->multiplier = 2.0;
    return;
}

void hard(struct Score *mode)
{
    mode->multiplier = 3.0;
    return;
}

int apple_point(struct Player *player, struct Score points)
{
    player->currentScore += (points.apple * points.multiplier);
    return player->currentScore;
}

int cherry_point(struct Player *player, struct Score points)
{
    player->currentScore += (points.cherry * points.multiplier);
    return player->currentScore;
}

int banana_point(struct Player *player, struct Score points)
{
    player->currentScore += (points.banana * points.multiplier);
    return player->currentScore;
}

int watermelon_point(struct Player *player, struct Score points)
{
    player->currentScore += (points.watermelon * points.multiplier);
    return player->currentScore;
}

void game_over(struct Player *player, struct Score *mode)
{
    if(player->currentScore > player->highScore)
    {
        player->highScore = player->currentScore;
        player->currentScore = 0;
        mode->multiplier = 1.0;
        return;
    }
    else
    {
        player->currentScore = 0;
        mode->multiplier = 1.0;
        return;
    }
}
