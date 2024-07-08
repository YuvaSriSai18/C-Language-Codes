// C program for rename the file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char oldname[] = "yuva.txt";   //oldfile name
    char newname[] = "dsalab_10_08.txt"; //new file name

    if (rename(oldname, newname) == 0) {
        printf("File '%s' renamed to '%s' successfully.\n", oldname, newname);
    } else {
        perror("Error renaming file");
    }

    return 0;
}
