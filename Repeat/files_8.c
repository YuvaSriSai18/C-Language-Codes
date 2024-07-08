//C program for removing file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "yuva.txt"; //deleting file name

    if (remove(filename) == 0) {
        printf("File '%s' removed successfully.\n", filename);
    } else {
        perror("Error removing file");
    }

    return 0;
}
