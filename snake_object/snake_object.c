#include "snake_object.h"

void snake_object_init(struct Snake * snake_object, int location_x, int location_y) {
    int pos[1][1] = {{ location_x, location_y}};
    snake_object->head_x = location_x;
    snake_object->head_y = location_y; 
    snake_object->length = 1;
    snake_object->location = *pos;
    snake_object->head_direction = 'e';

}

void set_eat_function(struct Snake * snake_object, void (*eat)()) {
    snake_object->eat = eat;
}