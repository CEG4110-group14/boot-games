#ifndef BUTTON_H
#define BUTTON_H

/**
    @file button.h

    @brief Includes structure and function that define a button's behavior

    @author Spencer Covault

*/

/* 
    Structure that defines how a button behaves 
        text: the text to be displayed on the string. This is what the user will select.
        x_pos: The x coordinate position on the screen. This point is the upper-left corner of the text
        y_pos: The y coordinate position on the screen. This point is the upper-left corner of the text
        handler(): The pointer to the function that gets called when the button is selected
        is_selected: A boolean value that represents if the button is currently highlighted (selected)
*/
struct Button {
    char * text;
    int x_pos;
    int y_pos;
    void (*handler)();
    int is_selected;
    int default_color;
    int selected_color;
};

/**
 * Initializes a button with text, location, and a handler function
 * 
 * @param button the struct to build the button around
 * @param text the text to display the button as
 * @param x the x coordinate of the top left corner of the button
 * @param y the y coordinate of the top left corner of the button
 * @param handler the function that handles the button being pressed
 * 
 */
void button_init(struct Button * button, char * text, int x, int y, void (*handler)());

/**
 * Sets the X position of the button
 * 
 * @param button the button being referenced
 * @param x the x coordinate of the top left corner of the button
 * 
 */
void button_set_x_pos(struct Button * button, int x);

/**
 * Sets the Y position of the button
 * 
 * @param button the button being referenced
 * @param y the y coordinate of the top left corner of the button
 * 
 */
void button_set_y_pos(struct Button * button, int y);

/**
 * Sets the X and Y position of the button at the same time
 * 
 * @param button the button being referenced
 * @param x the x coordinate of the top left corner of the button
 * @param y the y coordinate of the top left corner of the button
 * 
 */
void button_set_pos(struct Button * button, int x, int y);

/**
 * Sets the current state of the button
 * 
 * @param button the button being referenced
 * @param is_selected the indicator of the button being selected or not
 * 
 */
void button_set_selected(struct Button * button, int is_selected);

/**
 * Returns whether the button is currently selected
 * 
 * @return if the button is selected
 * 
 */
int button_get_selected();

/**
 * Sets the function that the button will execute upon being selected
 * 
 * @param button the button being referenced
 * @param handler the function that handles what happens upon pressing the button
 * 
 */
void button_set_handler(struct Button * button, void (*handler)());

/**
 * Sets the color that the button will display as by default
 * 
 * @param color the default color of the button
 * 
 */
void set_default_color(int color);

/**
 * Sets the color that the button will display as when selected
 * 
 * @param color the color that the button will display as when selected
 * 
 */
void set_selected_color(int color);

#endif
