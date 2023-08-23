#include <unistd.h>  // Include the necessary header for the write function

int _putchar(char c) {
    return write(1, &c, 1);  // Writes the character to standard output
}
