#include <stdio.h>
#include "helper.h" // Include the header file

int main() {
    printf("This is the main file.\n");

    // Call a function from another file
    printMessageFromHelper();

    return 0;
}
