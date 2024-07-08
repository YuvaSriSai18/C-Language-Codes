/* rewind, ftell, and fseek are C library functions used for file positioning and management. Here's a C program that demonstrates how to use rewind, ftell, and fseek:*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    long position;

    // Open a file for reading
    file = fopen("yuva.txt","r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Use ftell to get the current position
    position = ftell(file);
    if (position == -1L) {
        perror("Error getting file position");
        fclose(file);
        return 1;
    }

    printf("Current position: %ld\n", position);

    // Use fseek to set the file position to the end
    if (fseek(file, 0L, SEEK_END) != 0) {
        perror("Error setting file position to the end");
        fclose(file);
        return 1;
    }

    // Use ftell again to get the position (should be the end)
    position = ftell(file);
    if (position == -1L) {
        perror("Error getting file position");
        fclose(file);
        return 1;
    }

    printf("Position after fseek to the end: %ld\n", position);

    // Use rewind to set the file position to the beginning
    rewind(file);

    // Use ftell again to get the position (should be the beginning)
    position = ftell(file);
    if (position == -1L) {
        perror("Error getting file position");
        fclose(file);
        return 1;
    }

    printf("Position after rewind: %ld\n", position);

    // Close the file
    fclose(file);

    return 0;
}
