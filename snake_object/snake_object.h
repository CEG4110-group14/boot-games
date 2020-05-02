#ifndef SNAKE_OBJECT_H
#define SNAKE_OBJECT_H

/**
    @file snake_object.h

    @brief Defines the snake object and methods to call on it

    @author Spencer Covault
    

*/

/* 
    Structure that defines how a snake_object behaves 
        head_x: the x coordinate of the snake's head
        head_y: the y coordinate of the snake's head
        location: pointer to the array containing the snake's body's coordinates
        length: describes the length of the snake
        head_direction: the direction that the snake is currently pointed
        eat: the function that handles the snake eating pizza event
        selected_color: the color of the snake
*/
struct Snake {
    int head_x;
    int head_y;
    int ** location;
    int length;
    char head_direction;
    void (*eat)();
    int selected_color;
};

/**
 * Initializes snake_object with structure and posision
 * 
 * @param snake_object pointer to the struct to be used in the objecct
 * @param location_x the x coordinate to initialize the snake head at
 * @param location_y the y coordinate to initialize the snake head at
 * 
 */
void snake_object_init(struct Snake * snake_object, int location_x, int location_y);

/**
 * Initializes snake_object with structure and posision
 * 
 * @param snake_object pointer to the struct to apply the function to
 * @param eat pointer to the function that handles eating pizza
 * 
 */
void set_eat_function(struct Snake * snake_object, void (*eat)());

#endif
