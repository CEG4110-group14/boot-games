#ifndef SNAKE_OBJECT_H
#define SNAKE_OBJECT_H

/**
    @file snake_object.h

    @brief Defines the snake object and methods to call on it

    @author Spencer Covault
    

*/

struct Snake {
    int head_x;
    int head_y;
    int * location;
    int length;
    char head_direction;
    void (*eat)();
    int selected_color;
};

void snake_object_init(struct Snake * snake_object, int location_x, int location_y);

#endif