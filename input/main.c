

// Gets a single keystroke from the user
char get_keystroke()
{
    unsigned short int input_char;

    __asm__("int $0x16"
            : "=a" (input_char)
            : "0" (0x0));

    return ((char)input_char);
}

// Prints a single character to the terminal
char print_keystroke(char outchar, unsigned short int attr)
{
    __asm__("int $0x10"
            :
            : "a" ((0x0e << 8) | outchar), "b" (attr));
}

// Testing done in main()
void main(void) {
    
    unsigned short int input;
    input = get_keystroke();

    print_keystroke(input, 11);

    while (1) {
        __asm__ ("hlt");
    };
}
